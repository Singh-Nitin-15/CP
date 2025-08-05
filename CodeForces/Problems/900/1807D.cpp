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
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    ll totalsum = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        totalsum += v[i];
    }
    while(q>0){
        int l,r,k;
        cin>>l>>r>>k;
        ll sum = totalsum-accumulate(v.begin()+(l-1),v.begin()+r,0);
        ll esum = (r-l+1)*k;
        if((sum%2 == 0 && esum%2!=0) || (sum%2!=0 && esum%2 == 0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        q--;
    }
    return;
}