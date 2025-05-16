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
   string s;
   cin>>s; //1011001
   int n = s.size();
   int cnt = 0;
   bool flag = false;
   for(int i = 0; i<n-1; i++){
    // even = alice, odd = bob
    // cnt = 0->alice 11001, 1->bob 101, 2->alice 1, 3->bob lose
    //0011
    //cnt = 0->alice 01, 1->bob " "
    if(s[i] != s[i+1]){
        s.erase(i,2); 
        cnt++;
        i = -1;
        n=s.size();
        flag = true;
    }
   }
    if(cnt%2==0){
        cout<<"NET"<<endl;
    }else{
        cout<<"DA"<<endl;
    }
   return;
}
