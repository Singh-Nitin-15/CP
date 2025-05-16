#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n,x;
 cin>>n>>x;
 int A[n];
 for(int i = 0; i<n; i++){
    cin>>A[i];
 }
 for(int i = 0; i<n-1; i++){
    if(A[i]>A[i+1]){
        x*A[i];
    }
 }
 int count = 1;
 for(int i = 0; i<n; i++){
    if(A[i]>A[i+1]){
        count = 1;
    }
    if(A[i]<A[i+1]){
        count++;
    }
 }
 cout<<count<<endl;
}
return 0;
}