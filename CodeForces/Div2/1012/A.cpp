#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int x,y,a;
 cin>>x>>y>>a;
 double A = (double) + 0.5;
 int l = a%(x+y);
 if(l<=x){
    cout<<"NO"<<endl;
 }else{
    cout<<"YES"<<endl;
 }
}
return 0;
}