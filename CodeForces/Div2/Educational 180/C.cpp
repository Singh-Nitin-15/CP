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

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    read(a,n);

    ll cnt = 0;

    //case1 a[n-1] included.
    //a[i] + a[j] > a[n-1].
    if (n > 2) {
        int l = 0, r = n-2;
        while(l<r) {
            if(a[l] + a[r] > a[n - 1]){
               cnt += (r - l);
                r--;
            }else{
                l++;
            }
        }
    }

    //c2 not include a[n-1]
    //a[i]+a[j]>a[k] && a[i]+a[j]+a[k]>a[n-1].
    
    for (int k = n - 2; k >= 2; --k) {
        ll ptr1 = a[k];
        // a[i] + a[j] + a[k] > a[n-1] == a[i]+a[j]>ptr2
        ll ptr2 = a[n - 1] - a[k];

        int l = 0, r = k - 1;
        while (l < r) {
            if (a[l]+a[r]>ptr1 && a[l]+a[r]>ptr2){
               cnt += (r-l);
                r--;
            }else{
                l++;
            }
        }
    }

    cout<<cnt<<endl;
    return;
}