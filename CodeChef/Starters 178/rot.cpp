#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> arr = {1,2,3,4,5,6,7,8,9};
 int k = 4;
 int n =9;
 if((n-k)%2 == 0){
 reverse(arr.begin(),arr.begin()+(n-k));
reverse(arr.begin()+(n-k),arr.end());
reverse(arr.begin(),arr.end());
 }else{
    reverse(arr.begin(),arr.begin()+(n-k-1));
reverse(arr.begin()+(n-k-1),arr.end());
reverse(arr.begin(),arr.end());

// reverse(arr.begin()+(n-k+1),arr.end());
// reverse(arr.begin()+(n-k),arr.end());
 }
for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}
return 0;
}