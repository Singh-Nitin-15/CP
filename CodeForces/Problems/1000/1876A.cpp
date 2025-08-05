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
    int n,p;
    cin>>n>>p;
    vector<int> a(n);
    read(a,n);
    vector<int> b(n);
    read(b,n);
    //case 1
    if(n==1){
        cout<<p<<endl;
        return;
    }
    // otherwise
    // 1 map
    vector<pair<int,int>> mp;
    rep(i,0,n){
        mp.pb({b[i],a[i]});
    }
    // 2 sort
    sort(mp.begin(), mp.end(), [](pair<int,int> &x, pair<int,int> &y){
        if(x.first == y.first){
            return x.second>y.second;
        }
        // if x.ff != y.ff
        else return x.first<y.first;
    });
    // 3 reconstruct
    rep(i,0,n){
        b[i] = mp[i].ff;
        a[i] = mp[i].ss;
    }
    // another basic case
     if(b[0]>p){
        cout<<1LL*n*p<<endl;
        return;
     }
ll ans = p;
ll mem = n - 1; // excluding the original sender

for(int i = 0; i < n && mem > 0; i++) {
    if(b[i] <= p){
        ll take = min(mem, 1LL * a[i]);
        ans += 1LL * b[i] * take;
        mem -= take;
    }
}
if(mem > 0){
    ans += 1LL * p * mem;
}

    cout<<ans<<endl;
    return;
}