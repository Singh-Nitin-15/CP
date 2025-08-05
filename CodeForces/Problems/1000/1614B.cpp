// bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
//     if(p1.second>p2.second){
//         return false;
//     }
//     else{
//         return true;
//     }
// }
// ll n,time=0;
//         cin>>n;
//         vector<pair<ll,ll>> v;
//         for(ll i=0;i<n;i++){
//             ll x;
//             cin>>x;
//             v.push_back({x,i});
//         }
//         sort(v.begin(),v.end(),greater<>());
//         ll y=1,z=-1;
//         for(ll i=0;i<n;i+=2){
//             time+=(2LL*abs(y)*v[i].first);
//             v[i].first=y;
//             y++;
//         }
//         for(ll i=1;i<n;i+=2){
//             time+=(2LL*abs(z)*v[i].first);
//             v[i].first=z;
//             z--;
//         }
//         sort(v.begin(),v.end(),comp);
//         cout<<time<<endl;
//         cout<<0<<" ";
//         for(auto it:v){
//             cout<<it.first<<" ";
//         }
//         cout<<endl;
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
bool comparator1(pair <ll,ll> a,pair<ll,ll> b){
    if(a.ff!=b.ff){
        return a.ff>b.ff;
    }else{
        return a.ss>b.ss;
    }
}
bool comparator2(pair<ll,ll> p1, pair<ll,ll> p2){
    if(p1.second > p2.second){
        return false;
    }
    else{
        return true;
    }
}


void solve(){
    ll n;
    cin>>n;
    vector <pair<ll,ll>> v;
    rep(i,0,n){
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(all(v),comparator1);  
    int p = 1, q = -1;
    ll time =0;
    for(int i = 0; i<n; i+=2){
        time += (2LL*abs(p)*v[i].ff);
        v[i].ff = p;
        p++;
        
    }
    for(int i = 1; i<n; i+=2){
        time += (2LL*abs(q)*v[i].ff);
        v[i].ff = q;
        q--;
    }
    sort(all(v),comparator2);
    cout<<time<<endl;
    cout<<0<<" ";
    for(auto i:v){
        cout<<i.ff<<" ";
    }
    cout<<endl;

    return;
}