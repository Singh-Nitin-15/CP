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
    unordered_set<int> freq;
    int a;
    for(int i = 0; i<4; i++){
        cin>>a;
        freq.insert(a);
    }  
    cout<<4-freq.size();
    return;
}