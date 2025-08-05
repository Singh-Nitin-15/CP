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
    int n;
    cin>>n;
    vector<int> v(n);
    read(v,n);
    int cnt1  = count(v.begin(),v.end(),1);
    int cnt = 0;
    bool flag = false;
    for(int i = 0; i<n; i++){
        if(v[i]==0){
            cnt++;
        }else{
            cnt = 0;
        }
        if(cnt>1){
            flag = true;
            break;
        }
    }
    if(flag || cnt1 == n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return;
}