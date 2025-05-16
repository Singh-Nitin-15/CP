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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1 = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='1'){
            cnt1++;
        }
    }
    int cnt0 = s.size()-cnt1;
    ll ans = (cnt1+1)*cnt0 + (cnt1-1)*cnt1;
    cout<<ans<<endl;
    return;
}