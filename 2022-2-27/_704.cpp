#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int len=nums.size();
        int right=len-1;
        while(left<=right){
            int mid=(right-left)/2+left;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
};