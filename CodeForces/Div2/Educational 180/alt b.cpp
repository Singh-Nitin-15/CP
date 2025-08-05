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
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(0);
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
    vector<int> v(n);
    read(v,n);
    //case already beautiful;
    bool found = false;
    rep(i,0,n-1){
        if(abs(v[i]-v[i+1])<=1){
            found = true;
            break;
        }
    }
    if(found){
        cout<<0<<endl;
        return;
    }
    // int ans = INT_MAX;
    // bool flag = false;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         if(abs(v[i]-v[j])<=1 && i!=j){
    //             ans = min(ans,abs(i-j-1));
    //             flag = true;
    //             continue;
    //         }
    //     }
    //}
    bool flag = false;
    for(int i = 0; i < n - 2; i++){
        int a = v[i], b = v[i+1], c = v[i+2];
        if ((b >= min(a, c)) && (b <= max(a, c))){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
    return;
}