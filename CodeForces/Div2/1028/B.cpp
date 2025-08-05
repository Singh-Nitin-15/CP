#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

const int MOD = 998244353;

void read(vector<int> &v, int n){
    for (auto& x : v) cin >> x;
}

void solve(){
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    read(p, n);
    read(q, n);

    vector<ll> pow2(n + 1, 1);
    rep(i, 1, n + 1) pow2[i] = (pow2[i - 1] * 2) % MOD;

    vector<ll> A(n), B(n);
    rep(i, 0, n){
        A[i] = pow2[p[i]];
        B[i] = pow2[q[i]];
    }

    vector<ll> r(n);
    rep(i, 0, n){
        ll mx = 0;
        rep(j, 0, i + 1){
            mx = max(mx, (A[j] + B[i - j]) % MOD);
        }
        r[i] = mx;
    }

    for(auto x : r) cout << x << " ";
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
