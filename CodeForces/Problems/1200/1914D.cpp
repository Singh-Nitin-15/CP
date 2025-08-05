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

void read(vector<int> &v){
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
void pairRead(vector<pair<int,int>> &v,int n){
    v.resize(n);
    rep(i,0,n){
        int x;
        cin>>x;
        v[i]= {i,x};
    }
}
bool comp(pair<int,int> &a,pair<int,int> &b){
    if(a.ss!=b.ss){
        return a.ss>b.ss;
    }
    return a.ff<b.ff;
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
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    vector<pair<int,int>> c(n);
    pairRead(a,n);
    pairRead(b,n);
    pairRead(c,n);
    sort(all(a),comp);
    sort(all(b),comp);
    sort(all(c),comp);
    ll maxi = 0;
    rep(i,0,min(n,3)){
        rep(j,0,min(n,3)){
            rep(k,0,min(n,3)){
                int idx_a = a[i].ff;
                int val_a = a[i].ss;
                int idx_b = b[j].ff;
                int val_b = b[j].ss;
                int idx_c = c[k].ff;
                int val_c = c[k].ss;
                if(idx_a!=idx_b && idx_a != idx_c && idx_b != idx_c){
                    maxi = max(maxi,(ll)val_a+(ll)val_b+(ll)val_c);
                }
            }
        }
    }
    cout<<maxi<<endl;
    
    return;
}