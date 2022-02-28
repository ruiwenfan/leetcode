//TODO
// quickSort
#include <deque>
#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    static int partition(int left,int right,vector<int>& nums){
        int key=nums[left];
        while (left<right){
            while(left<right && nums[right]>key){
                right--;
            }
            nums[left]=nums[right];
            while (left<right && nums[left]<=key)
            {
                left++;
            }
            nums[right]=nums[left];
        }
        nums[left]=key;
        return left;
        
    }
    static void quick_sort(int left,int right,vector<int>& nums){
        if(right<=left){
            return;
        }
        int random=(rand() % (right-left+1))+ left;
        swap(nums[left],nums[random]);
        int part=partition(left,right,nums);
        quick_sort(left,part-1,nums);
        quick_sort(part+1,right,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        int len=nums.size();
        quick_sort(0,len-1,nums);
        return nums;
    }
};
int main(){
    vector<int >a={6,3,2,5,4};
    Solution s;
    for(auto i:a){
        cout << i << endl;
    }
    cout << " after" << endl;
    s.quick_sort(0,4,a);
    for(auto i:a){
        cout << i << endl;
    }
    /*
    s.sortArray(a);
    for(auto i:a){
        cout << i << endl;
    }*/
}
