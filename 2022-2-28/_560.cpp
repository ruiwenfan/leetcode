#include <deque>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;
/*
    int subarraySum(vector<int>& nums, int k) {
        int len=nums.size();
        int ans=len+1;
        int rk=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i>0){
                sum-=nums[i-1];
            }
            while(sum<k && rk+1<nums.size()){
                sum+=nums[rk+1];
                rk++;
            }
            if(sum==k){
                ans=min(ans,rk-i+1);
            }
        }
        return ans==len+1?-1:ans;
    }
    */
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mmap;
        int pre_sum=0;
        int ans=0;
        mmap[0]=1;
        for(int i=0;i<nums.size();i++){
            pre_sum+=nums[i];
            if(mmap.count(pre_sum-k)){
                ans+=mmap[pre_sum-k];
            }
            mmap[pre_sum]++;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int >a={1,-1,0};
    s.subarraySum(a,0);
}
//ps: two sum