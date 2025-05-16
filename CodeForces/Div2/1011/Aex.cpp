#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 bool flag = true;
 if(n==1){
    cout<<"NO"<<endl;
    continue;
 }else if(s[n-1]>s[0]){
    cout<<"YES"<<endl;
    continue;
 }else if(k>0){
    for(int i = 0; i<n; i++){
        if(s[i]!=s[0]){
            cout<<"YES"<<endl;
            flag = false;
            break;
        }
    }
 }else if(k==0){
    int z = 0;
    for(int i = 0; i<n/2; i++){
        if(s[i]<s[n-i-1]){
            z++;
            break;
        }
       else if(s[i]==s[n-i-1]){
            continue;
        }
        else{
            break;
        }
    }
    if(z==1){
        cout<<"YES"<<endl;
        continue;
    }else{
        cout<<"NO"<<endl;
        continue;
    }
}

if(flag){
    cout<<"NO"<<endl;
}
}
return 0;
}