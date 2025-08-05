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
void print(vector<int> &v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i] == 1){
            v[i]++;
        }
    }
    for(int i = 1; i<n; i++){
        if(v[i]%v[i-1] == 0){
            v[i]++;
        }
    }
    print(v);
    return;
}