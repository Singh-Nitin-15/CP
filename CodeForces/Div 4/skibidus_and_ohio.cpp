#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 int count = 0;
 for(int i = 0; i<s.size();i++){
    if(s[i] == s[i+1]){
        count++;
    }
 }
 if(count>=1){
    cout<<'1'<<endl;
 }else{
    cout<<s.size()<<endl;
 }
}
return 0;
}