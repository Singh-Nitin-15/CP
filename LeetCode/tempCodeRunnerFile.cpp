#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 vector<int> nums = {1,1,1};
 int i = 0;
 int count = 0;
while(i<nums.size()){
    if(nums[i]>nums[i+1]){
        nums[i+1]++;
        count++;
    }else{
        i++;
    }

}
cout<<count<<endl;
return 0;
}