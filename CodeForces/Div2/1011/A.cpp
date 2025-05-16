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

 if(n==1){
    cout<<"NO"<<endl;
    continue;
 }
 bool flag = true;
int count = 1;
for(int i = 1; i<n ;i++){
    if(s[0]!=s[i]) count++;
     break;
} 
if(count == 1){
    cout<<"N0"<<endl;
    continue;
}
if(k==0){
    int st = 0;
    int end = n-1;
    int mid = (n/2)+1;
    for(int i =0; i<mid; i++){
        if(s[st]==s[end]){
            st++;
            end--;
        }
        else if(s[st]>s[end]){
            flag = false;
        }

    }
}else{
    cout<<"YES"<<endl;
}
}
return 0;
}