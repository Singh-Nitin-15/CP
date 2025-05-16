#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
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
    int n,x;
    cin>>n>>x;
    vector<int> v;
    int add = 0;
    if(x==n){
        for(int i = 0; i<n; i++){
            v.push_back(i);
        }
    }
    else{
        for(int i = 0; i<n-1; i++){
            if(add == x) v.push_back(++add);
            else v.push_back(add);
            add++;
        }
        v.push_back(x);
    }
   
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" "; 
    }
    cout<<endl;
    return;
}