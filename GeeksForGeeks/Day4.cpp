#include<bits/stdc++.h>
using namespace std;
void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    d=d%n;

        reverse(arr.begin(), arr.begin()+d);
        reverse(arr.begin()+d, arr.end());
        reverse(arr.begin(), arr.end());
        
        
}
int main()
{
 
return 0;
}