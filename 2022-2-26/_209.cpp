#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int rk=-1;
        int ans=nums.size()+1;
        int tmp=0;
        for(int i=0;i<nums.size();i++){
            if(i>0){
                tmp-=nums[i-1];
            }
            while(tmp<target && rk+1<nums.size()){
                tmp+=nums[rk+1];
                rk++;
            }
            if(tmp>=target){
                ans=min(ans,rk-i+1);
            }
        }
        return ans==nums.size()+1 ? 0 : ans; 
    }
};