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
    int smallest = INT_MAX;
    bool flag = false;
    for(int i = 0; i<n-1; i++){
        if(v[i]>v[i+1]){
            flag = true;
            break;
        }
        int diff = abs(v[i]-v[i+1]);
        smallest = min(smallest,diff);
    }
    if(flag){
        cout<<0<<endl;
    }else{
        int ans = (smallest/2)+1;
        cout<<ans<<endl;
    }

    return;
}