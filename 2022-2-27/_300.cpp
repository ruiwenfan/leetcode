#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    static int find(int left,int right,int target,int ans[]){
        int le=left,r=right;
        while(le<=r){
            int mid=(r-le)/2+le;
            if(ans[mid]>=target){
                r=mid-1;
            }else{
                le=mid+1;
            }                                               
        }
        return le;
    }
    int lengthOfLIS(vector<int>& nums) {
        int nc=nums.size();
        int ans[nc+1]; // use 1-nc 
        ans[1]=nums[0];
        int len=1;
        for(int i=1;i<nc;i++){
            if(nums[i]>ans[len]){
                len++;
                ans[len]=nums[i];
            }else{
                int tmp=find(1,len,nums[i],ans);
                ans[tmp]=nums[i];
            }
        }
        return len;
    }
};