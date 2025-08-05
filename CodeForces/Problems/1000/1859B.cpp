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

void read(vector<ll> &v,int n){
    v.resize(n);
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

void solve();

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

void solve(){
    //no of array
    ll n;
    cin>>n;
    vector<ll> smallest;
    vector<ll> sec_small;
    while(n--){
        // no of elements in array
        ll m;
        cin>>m;
        vector<ll> v(m);
        read(v,m);
        sort(all(v));
        smallest.push_back(v[0]);
        sec_small.push_back(v[1]);
    }
    sort(all(smallest));
    sort(all(sec_small));

    ll ans = 0;
    ans += smallest[0];
    rep(i,1,sec_small.size()){
        ans += sec_small[i];
    }
    cout<<ans<<endl;
    

    return;
}