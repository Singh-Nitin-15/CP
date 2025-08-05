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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt0 = count(all(s),'0');
    int cnt1 = n-cnt0;
    bool flag = false;
    if(cnt0 == n || cnt1 == n){
        if(k == n/2) YES;
        else NO;
        return;
    }
    //case1
    if(cnt1>=k && cnt0>=k && cnt0-k == cnt1-k && k%2 == 0){
        flag = true;        
    }
    //case2 
    if(cnt1>=2*k && cnt0 == cnt1-2*k){
        flag = true;
    }
    //case3
    if(cnt0>=2*k && cnt0-2*k == cnt1){
        flag = true;
    }
    if(flag){
        YES;
    }else{
        NO;
    }
    // if(cnt1 >= k && cnt0 >= k || cnt1 >= k*2 || cnt0 >= k*2){
    //     int rem = n-(2*k);

    // }else{
    //     NO;
    //     return;
    // }
     

    return;
}