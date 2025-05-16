#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define vec vector<int> v
 
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
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a && n==b){
        yes;
     return;
    } 
    if(a+b>=n){
        no;
        return;
    }
   
    if(n-(a+b)==1) no;
    else yes;
    return;
}