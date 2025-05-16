#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<long long int> v

void solve();
void inputArray(vector<long long int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}
ll GCD(ll x, ll y){
    while(y != 0){
        ll temp = y;
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
    int n;
    cin>>n;
    long long int v[n];
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    sort(v,v+n);
    int idx = -1;
    ll x = 0;
    for(int i = 1; i<n; i++){
    if((v[i]%v[0])==0){
        x = v[i];
        idx = i;
        break;
    }
   }
   if(idx==-1){
    cout<<"NO"<<endl;
    return;
   }
   ll gcd =x;
   bool flag = true;
   for(int i = idx; i<n; i++){
    if((v[i]%v[0])==0){
        gcd = __gcd(v[i],gcd);
    }
   }
   if(gcd == v[0]){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
       
    return;
}