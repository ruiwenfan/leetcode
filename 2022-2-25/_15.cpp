#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int len=nums.size();
        for(int i=0;i<len-2;i++){
            if(nums[i]>0){
                continue;
            }
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int left=i+1,right=len-1;
            while(left<right){
                if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }else if(nums[i]+nums[left]+nums[right]<0){
                    left++;
                }else{
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                      left++;
                    while(left<right && nums[right]==nums[right+1])
                      right--;
                }
            }
        }
        return ans;
    }
};
//ps:vector.size() return a unsigned number,
//so use it like this:
//int len=vector.size();