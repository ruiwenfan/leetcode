#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int len=nums.size();
        for(int i=len-1;i>=2;i--){
            if(nums[i-1]+nums[i-2] > nums[i]){
                ans=max(ans,nums[i]+nums[i-1]+nums[i-2]);
            }
        }
        return ans;
    }
};
/*int main(){
    int a[]={1,2,3,4,5,2,23,1,4,0};
    vector<int> b (a,a+10);
    sort(b.begin(),b.end());
    auto l=b.begin();
    auto r=b.end();
    while(l!=r){
        cout << *l << endl;
        l++;
    }
}*/