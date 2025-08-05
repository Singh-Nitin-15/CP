#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n,c;
 cin>>n>>c;
 string s;
 cin>>s;
 int x= s.size();
 int sum = 1;
 int i=1;
 int ansSum = sum;
 while(sum<c && i<x){
    
    sum+=1;
    ansSum+=sum;
    i++;
 }
 
 int ans = (x-i)*c + ansSum;
 cout<<ans<<endl;
    
}
return 0;
}