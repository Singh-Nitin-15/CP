#include<bits/stdc++.h>
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

void read(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}

void print(vector<int> &v){
    for(auto x : v) cout << x << " ";
    cout << endl;
}

static int GCD(int x, int y){
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

ll power(ll a, ll b, ll mod){
    ll res = 1;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
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

int interval_distance(ll min1, ll max1, ll min2, ll max2) {
    if (max1 < min2) return min2 - max1;
    if (max2 < min1) return min1 - max2;
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    rep(i, 0, n - 1) {
        if (abs(a[i] - a[i + 1]) <= 1) {
            cout << 0 << endl;
            return;
        }
    }

    int min_ops = INT_MAX;

    rep(p, 0, n - 1) {
        vector<ll> min_left(p + 1), max_left(p + 1);
        min_left[p] = max_left[p] = a[p];
        per(i, p - 1, 0) {
            min_left[i] = min(min_left[i + 1], a[i]);
            max_left[i] = max(max_left[i + 1], a[i]);
        }

        vector<ll> min_right(n), max_right(n);
        min_right[p + 1] = max_right[p + 1] = a[p + 1];
        rep(i, p + 2, n) {
            min_right[i] = min(min_right[i - 1], a[i]);
            max_right[i] = max(max_right[i - 1], a[i]);
        }

        int r = n - 1;
        per(l, p, 0) {
            while (r > p + 1 && interval_distance(min_left[l], max_left[l], min_right[r - 1], max_right[r - 1]) <= 1) {
                r--;
            }
            if (interval_distance(min_left[l], max_left[l], min_right[r], max_right[r]) <= 1) {
                int ops = (p - l) + (r - (p + 1));
                min_ops = min(min_ops, ops);
            }
        }
    }

    cout << (min_ops == INT_MAX ? -1 : min_ops) << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
       
        solve();
    }
    return 0;
}
