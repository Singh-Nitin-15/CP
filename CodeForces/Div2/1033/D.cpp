#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(),(x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const ll MOD = 1e9 + 7;
const int MAX_VAL = 100005;
vector<ll> invFact(MAX_VAL);

ll power(ll a, ll b, ll mod) {
    ll res = 1;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll modInverse(ll n){
    return power(n, MOD - 2, MOD);
}

void precompute_inv_factorials() {
    invFact[0] = 1;
    ll current_fact = 1;
    for (int i = 1; i < MAX_VAL; i++) {
        current_fact = (current_fact * i) % MOD;
    }
    invFact[MAX_VAL - 1] = modInverse(current_fact);
    for (int i = MAX_VAL - 2; i >= 1; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

ll nCr_mod_p(ll n, ll r){
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r;
    if (r >= MAX_VAL) return 0;
    ll num = 1;
    for (ll i = 0; i < r; ++i) {
        num = (num * ((n - i) % MOD)) % MOD;
    }
    if (num < 0) num += MOD;
    return (num * invFact[r]) % MOD;
}

void solve(){
    ll a, b, k;
    cin >> a >> b >> k;

    ll n_val = k * (a - 1) + 1;
    ll n_mod = n_val % MOD;
    if (n_mod < 0) n_mod += MOD;

    ll b_minus_1_k_mod = ((b - 1 + MOD) % MOD * (k % MOD)) % MOD;
    if (b_minus_1_k_mod < 0) b_minus_1_k_mod += MOD;

    ll combinations = nCr_mod_p(n_mod, a);

    ll m_mod = (b_minus_1_k_mod * combinations + 1) % MOD;
    if (m_mod < 0) m_mod += MOD;

    cout << n_mod << " " << m_mod << endl;
}

void read(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}

void print(vector<int> &v){
    for(auto x : v) cout << x << " ";
    cout << endl;
}

int GCD(int x, int y){
    while(y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

ll LCM(ll a, ll b){
    return a / GCD(a, b) * b;
}

vector<int> prefix_sum(const vector<int>& a) {
    int n = a.size();
    vector<int> ps(n + 1, 0);
    rep(i, 0, n)
        ps[i + 1] = ps[i] + a[i];
    return ps;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    precompute_inv_factorials();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
