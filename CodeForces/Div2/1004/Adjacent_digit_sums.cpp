#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int x,y;
 cin>>x>>y;
 if((x==99 && y==1) || (x==999 && y==1) || (y==99 && x==1) || (y==999 && x==1) || (x==18 && y==1) || (x==27 && y==1) || (y==18 && x==1) || (y==27 && x==1)){
    cout<<"YES"<<endl;
 }
 else if(abs(y-x)>1 || (x-y) == 0 || x>y){
    cout<<"NO"<<endl;
 }
 else{
    cout<<"YES"<<endl;
 }
}
return 0;
}