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
    ll n;
    cin>>n;
    vector<int> a(n);
    read(a,n);
    vector<int> b(n);
    read(b,n);
    map<int,int> mp;
    map<int,int> mp2;
    int cnt = 1;
    rep(i,1,n){
        if(a[i]==a[i-1]) cnt++;
        else{
            mp[a[i-1]] = max(cnt,mp[a[i-1]]);
            cnt = 1;
        }
    }
    mp[a[n-1]] = max(cnt, mp[a[n-1]]);
    cnt = 1;
     rep(i,1,n){
        if(b[i]==b[i-1]) cnt++;
        else{
            mp2[b[i-1]] = max(cnt,mp2[b[i-1]]);
            cnt = 1;
        }
    }
     mp2[b[n-1]] = max(cnt,mp2[b[n-1]]);
    ll freq = 0;
    for (ll i = 0; i <= 2 * n; i++) {
        ll combined = mp[i] + mp2[i];
        freq = max(freq, combined);

    }
    cout << freq << endl;

    return;
}