#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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
    ll a,b,n;
    cin>>a>>b>>n;
    vector<int> v(n);
    read(v,n);
    if(a == 1){
        cout<<1<<endl;
        return;
    }
    ll sum = b;
        for(int i = 0; i<n; i++){
            if(v[i]>=a){
                sum += a-1;
            }else{
                sum+= v[i];
            }
        }
        cout<<sum<<endl;
    return;
}