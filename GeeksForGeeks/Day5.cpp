#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& arr) {
    // code here
    int  n = arr.size();
    int i = n-2;
    int idx = -1;
    while(i>=0){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    i--;
    }
    if(idx == -1){
        reverse(arr.begin(),arr.end());
        return;
    }
    int nextGreater = -1;
    for(int i = n-1; i>idx; i--){
        if(arr[i]>arr[idx]){
            nextGreater = i;
            break;
        }
    }
    swap(arr[idx],arr[nextGreater]);
    sort(arr.begin()+idx+1,arr.end());
}
int main()
{
    // alternative use stl library
    vector<int> arr = {2,4,5,0,7,1};
    next_permutation(arr.begin(), arr.end());
 
return 0;
}