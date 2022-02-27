#include <math.h>
int jump(int* nums, int numsSize){
    int ans=0;
    int end=0;
    int max=0;
    for(int i=0;i<numsSize-1;i++){
        max=fmax(max,nums[i]+i);
        if(i==end){
            ans++;
            end=max;
        }
    }
    return ans;
}