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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    ll n; cin>>n;
    vector<int> v(n);
    read(v,n);
    //case 1 all 0 initially
    vector<int> a(n,0);
    if(v==a){
        cout<<0<<endl;
    }else{
    int l = 0;
    int r = n-1;
    while(v[l]==0) l++;
    while(v[r]==0) r--;
    int cnt = 0;
    for(int i = l; i<r; i++){
        if(v[i] == 0) cnt++;
    }
    if(cnt == 0) cout<<1<<endl;
    else cout<<2<<endl;
    }
    

    return;
}