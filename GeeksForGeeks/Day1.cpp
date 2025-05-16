#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr) {
    // code here
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int i = n-2;
    while(i>0 && arr[i] == arr[n-1]){
        i--;
    }
    bool flag = false;
    if(i == 0 && arr[i] == arr[n-1]){
        flag = true;
    }
    if(flag){
        return -1;
    }else{
        return arr[i];
    }
}
int main()
{
 
return 0;
}