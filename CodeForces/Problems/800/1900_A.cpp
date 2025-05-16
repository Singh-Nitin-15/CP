#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve();
void inputArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
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
    string s;
    cin>>s;
    int i = 0;
   
    int ans = 0;
    while(i<n){
        if(s[i] == '.'){
            int count = 0;
            while(i<n && s[i] == '.'){
                count++;
                i++;
            }
        
        if(count>2){
            ans = 2;
            break; 
        }else{
            ans += count;
        }
        }else{
            i++;
    }
    }
    cout<<ans<<endl;
    
    return;
}