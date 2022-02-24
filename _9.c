typedef int bool;
#define true 1
#define false 0
#include <stdio.h>
bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    int nums[20];
    int i=0;
    int len=0;
    while(x!=0){
        nums[i++]=x%10;
        x/=10;
        len++;
    }
    int left=0,right=len-1;
    while(left<right){
        if(nums[left]!=nums[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}