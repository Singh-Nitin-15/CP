#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 vector<int> nums = {1,5,2,4,1};
 int i = 0;
 int count = 0;
while(i<nums.size()-1){
    if(nums[i]>=nums[i+1]){
        nums[i+1]++;
        count++;
    }else{
        i++;
    }

}
cout<<count<<endl;
return 0;
}