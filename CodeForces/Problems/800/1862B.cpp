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
    vector<int> ans;
    ans.push_back(v[0]);
    for(int i = 1; i<n; i++){
        if(v[i]==1 && v[i-1]>v[i]){
            ans.push_back(v[i]);
            ans.push_back(v[i]);
            continue;
        }
        if(v[i]>=v[i-1]){
            ans.push_back(v[i]);
        }else{
            ans.push_back(v[i]-1);
            ans.push_back(v[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
}