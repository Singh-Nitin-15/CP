#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, a, b) for (int i = a; i < b; i++)

void read(vector<int> &v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n), b(n);
    read(a, n);
    read(b, n);

    map<int, int> mp, mp2;

    // Count max streaks in array a
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            mp[a[i - 1]] = max(mp[a[i - 1]], cnt);
            cnt = 1;
        }
    }
    mp[a[n - 1]] = max(mp[a[n - 1]], cnt);

    // Count max streaks in array b
    cnt = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            cnt++;
        } else {
            mp2[b[i - 1]] = max(mp2[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    mp2[b[n - 1]] = max(mp2[b[n - 1]], cnt);

    ll freq = 0;

    // Create a set of all unique keys from both maps
    set<int> keys;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        keys.insert(it->first);
    }
    for (map<int, int>::iterator it = mp2.begin(); it != mp2.end(); ++it) {
        keys.insert(it->first);
    }

    // Calculate max frequency
    for (set<int>::iterator it = keys.begin(); it != keys.end(); ++it) {
        int val = *it;
        ll combined = mp[val] + mp2[val];
        freq = max(freq, combined);
    }

    cout << freq << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
