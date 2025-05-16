#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int k){
    reverse(arr.begin(),arr.begin()+k);
   reverse(arr.begin()+k,arr.end());
   reverse(arr.begin(),arr.end());
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            arr[i] = i+1;
        }
        //n-k = even
        if((n-k)%2 == 0){
            reverse(arr,k);
        }else{
            reverse(arr,k+1);
        }
        
    }
}