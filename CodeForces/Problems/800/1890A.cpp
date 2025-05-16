#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define vec vector<int> v

void solve();
void inputArray(vector<int> &v,int n){
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
    int n;
    cin>>n;
    vec(n);
    inputArray(v,n);
    int cnt = 0;
    int x = v[0];
    int y = v[1];
    bool flag = true;
    for(int i = 0; i<n; i = i+2){
        if(v[i] != x){
            flag = false;
        }
        if(v[i+1]!=y){
            flag = false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return;
}