#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(),(x).end()

void solve();
void read(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}
static int GCD(int x, int y){
    while(y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    cin>>t;
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
    unordered_map<ll, ll> mp;
    for(int i = 0; i<n; i++){
        mp[v[i]]++;
    }
    ll curr_highest_freq = 0;
    for(auto i : mp){
        curr_highest_freq = max(curr_highest_freq, i.second);
    }
    ll op = 0;
    while(curr_highest_freq<n){
        op++;
        if(curr_highest_freq*2<=n){
            op += curr_highest_freq;
            curr_highest_freq *= 2;
        }else{
            op += n-curr_highest_freq;
            curr_highest_freq = n;
        }
    }
    cout<<op<<endl;
    return;
}