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
    int maxZeroes = 0, currZero = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==0){
            currZero++;
        }// reinitialize to 0
        else{
            currZero = 0;
        }
        maxZeroes = max(currZero,maxZeroes);
    }
    cout<<maxZeroes<<endl;
    return;
}