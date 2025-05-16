#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 float k;
 cin>>k;
 float temp1 = ((k-1)/3 + 1);
 int temp2 = temp1;
 float ans = temp1 - temp2;
 if(ans>0){
    cout<<"NO"<<endl;
 }else{
 cout<<"YES"<<endl;
 }
}
return 0;
}