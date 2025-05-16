#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 int arr[n];
 for(int i = 0; i<n; i++){
    cin>>arr[i];
 }
 sort(arr, arr+n);
 int ans = -1;
 for(int i = 0; i<n-1; i++){
    if(arr[i] == arr[i+1]){
        ans = arr[i];
        break;
    }
 }
 if(ans == -1){
    cout<<-1<<endl;
 }
 else{
 cout<<'1'<<endl;
 cout<<ans<<endl;
 }
}
return 0;
}