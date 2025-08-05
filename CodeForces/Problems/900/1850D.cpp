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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    read(a,n);
    if(n==1){
        cout<<0<<endl;
        return;
    }
    sort(all(a));
    int maxi = -1;
    int cnt = 0;
    for(int i = 1; i<n; i++){
        if(a[i]-a[i-1]<=k){
            cnt++;
        }else{
            cnt = 0;
        }
        maxi = max(cnt,maxi);
    }
    cout<<n-maxi-1<<endl;

    return;
}