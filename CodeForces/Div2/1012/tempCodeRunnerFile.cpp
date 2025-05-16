#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int x,y,a;
 a++;
 int l = a%(x+y);
 if(l<=x){
    cout<<"NO"<<endl;
 }else{
    cout<<"YES"<<endl;
 }
}
return 0;
}