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
    for(int j = i+1; j<i+2; j++){
        if(A[i]<A[j]){
            count++;
        }
    }
 }
 cout<<count<<endl;
}
return 0;
}