#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x,y;
 cin>>x>>y;
 
 int ans = y/x;
 if(x>y){
    cout<<"0";
    return 0;
 }
 if(y<=(2*x)){
    cout<<ans-1<<endl;
 }else{
 cout<<ans<<endl;
 }
return 0;
}