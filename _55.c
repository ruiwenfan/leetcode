#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
typedef int bool;
int main(){
    printf("%d\n",true);
    printf("%d\n",false);
}

bool canJump(int* nums, int numsSize){
    if(numsSize==1){
        return true;
    }
    int max=0;
    for(int i=0;i<numsSize-1;i++){
        if(i<=max){
            max=fmax(max,i+nums[i]);
            if(max>=numsSize-1){
                return true;
            }
        }
    }
    return false;
}
