#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n,m;
 cin>>n>>m;
 vector<int> a(n);
 vector<int> b(m);
 for(int i = 0; i<n; i++){
    cin>>a[i];
 }
 int mini = INT_MAX;
 int idx;
 for(int j = 0; j<m; j++){
    cin>>b[j];
    mini = min(b[j], mini);
    idx = j;
 }
 int k = k- idx;
 vector<int>ansarr;
 
 for(int i = n-k; i<n; i++){
 ansarr.push_back(b[i]);
 }
 for(int i = 0; i<n-k; i++){
     ansarr.push_back(b[i]);
 }
 for(int i : ansarr){
 cout<<i<<" ";
 }  
}
return 0;
}