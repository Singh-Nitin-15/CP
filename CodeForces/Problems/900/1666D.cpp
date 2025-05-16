#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<int> v

void solve();
void read(vector<int> &v, int n) {
    for (auto& i : v) {
        cin >> i;
    }
}

static int GCD(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    string s, t;
    cin >> s >> t;
    
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int ptr1 = 0, ptr2 = 0;
    bool flag = true;

    // Traverse both strings
    while (ptr1 < s.size() && ptr2 < t.size()) {
        if (s[ptr1] == t[ptr2]) {
            // If characters match, move both pointers
            ptr1++;
            ptr2++;
        } else {
            // If characters don't match, check if that character exists in frequency map
            if (freq[s[ptr1]] > 0) {
                freq[s[ptr1]]--;
                ptr1++;
            } else {
                flag = false;
                break;
            }
        }
    }

    // If all of t is matched and remaining characters in s are deletable
    if (ptr2 == t.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
