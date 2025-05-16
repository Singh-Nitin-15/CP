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
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    string s;
    cin>>s;
    unordered_set<char> freq;
    for(int i = 0; i<s.size(); i++){
        freq.insert(s[i]);
    }
    if(freq.size()%2==0){
        cout<<"CHAT WITH HER"<<endl;
    }else{
        cout<<"IGNORE HIM"<<endl;
    }
    return;
}