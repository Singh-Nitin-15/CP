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
        solve();
    return 0;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = count(s.begin(),s.end(),'A');
    if(cnt>=ceil(float(n)/2)){
        cout<<"Anton"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }

    return;
}