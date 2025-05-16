#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void read(vector<int> &v) {
    for (int &x : v) cin >> x;
}

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    read(a);
    read(b);

    int known_sum = -1;
    bool conflict = false;

    // Step 1: Determine if a unique valid sum x exists from known b[i]
    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            int s = a[i] + b[i];
            if (known_sum == -1) known_sum = s;
            else if (known_sum != s) {
                conflict = true;
                break;
            }
        }
    }

    if (conflict) {
        cout << 0 << '\n';
        return;
    }

    // Step 2: If known sum exists, verify it's valid for all unknowns
    if (known_sum != -1) {
        for (int i = 0; i < n; ++i) {
            if (b[i] == -1) {
                ll bi = known_sum - a[i];
                if (bi < 0 || bi > k) {
                    cout << 0 << '\n';
                    return;
                }
            }
        }
        cout << 1 << '\n';
        return;
    }

    // Step 3: If all b[i] == -1, count all valid x values
    int min_a = *min_element(a.begin(), a.end());
    int max_a = *max_element(a.begin(), a.end());

    // x = a[i] + b[i] ⇒ b[i] = x - a[i] must be in [0, k] ⇒ x - a[i] ∈ [0, k]
    // So x ∈ [max_a, k + min_a]
    ll lo = max_a;
    ll hi = k + min_a;

    ll ways = max(0LL, hi - lo + 1);
    cout << ways << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
