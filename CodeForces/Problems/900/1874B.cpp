#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();
void inputArray(vector<int> &v,int n){
    for (auto& i : v) {
        cin >> i;
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
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
    int cnt = 0;
    bool flag = true;
    while(n!=1){
        int freq = 0;
        while(n%6!=0){
           n = n*2;
            cnt++;
            freq++;
            if(freq>1){
                flag = false;
                break;
            }
        }
        if(!flag) break;
        while(n%6==0){
          n = n/6;
            cnt++;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }else{
        cout<<cnt<<endl;
    }
    return;
}
