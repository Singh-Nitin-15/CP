#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();
void inputArray(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
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
    inputArray(v,n);
    if(v.front() ==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}