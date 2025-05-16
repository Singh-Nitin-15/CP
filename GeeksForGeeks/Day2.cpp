#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int nonZeroIdx = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            arr[nonZeroIdx] = arr[i];
            nonZeroIdx++;
        }
        }
        while(nonZeroIdx<n){
            arr[nonZeroIdx] = 0;
            nonZeroIdx++;
        }
    }
int main()
{
    vector<int> v = {3,5,0,0,4};
    pushZerosToEnd(v);
return 0;
}