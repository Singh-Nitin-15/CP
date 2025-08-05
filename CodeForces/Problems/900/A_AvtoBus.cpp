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
    ll n;
    cin>>n;
    if(n<4 || n%2==1){
        cout<<-1<<endl;
    }
    else{
    //min
    ll l = ceil(n*1.0 / 6); 
   
    // max
    ll r = n/4;

    cout<<l<<" "<<r<<endl;

    }
    
    
    return;
}