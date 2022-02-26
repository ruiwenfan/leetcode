#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        int dp0=nums[0];
        int dp1=max(nums[0],nums[1]);
        int ans=0;
        for(int i=2;i<nums.size();i++){
            ans=max(dp0+nums[i],dp1);
            dp0=dp1;
            dp1=ans;
        }
        return ans;
    }
};