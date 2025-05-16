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
    string n;
    cin>>n;
    int len = n.size();
    if(len == 1){
        cout<<0<<endl;
        return;
    }
    int ptr = len-1;
    int cnt = 0;
    while(ptr>0){
        if(n[ptr]!='0'){
            break;
        }else{
            ptr--;
            cnt++;
        }
        
    }
    for(int i = 0; i<ptr; i++){
        if(n[i] != '0') cnt++;
    }
    cout<<cnt<<endl;
   
    return;
}