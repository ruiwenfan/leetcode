#include <math.h>
int maxSubArray(int* nums, int numsSize){
    int ans=nums[0];
    int max=nums[0];
    for(int i=1;i<numsSize;i++){
        if(max>0){
            max+=nums[i];
            ans=fmax(ans,max);
        }else{
            max=nums[i];
            ans=fmax(ans,max);
        }
    }
    return ans;
}