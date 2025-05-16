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
    vec(n,0);
    // larvae
    if(n>=26){
        v[0] = ((n/26)*2);
    }
    //cocoon
    if(n>=2){
        v[1] = 1;
        v[1] += (n-2)/26;
    }
    //matured insects
    if(n>=10){
        v[2] = 1;
        v[2] += (n-10)/26;
    }

    for(int i = 0; i<3; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}