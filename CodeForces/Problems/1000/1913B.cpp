#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    
    int cnt0 =0;
    int cnt1 =0;
    for(int i =0; i<n; i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    if(cnt0 == cnt1){
        cout<<0<<endl;
        return;
    }   
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') cnt1--;
        else cnt0--;
        if(cnt1 < 0 || cnt0 < 0){
            cout<<(n-i)<<endl;
            return;
       }
       
    }
    
}
