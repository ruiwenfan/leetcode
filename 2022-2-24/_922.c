void swap(int *nums,int i,int j){
    int tmp=nums[i];
    nums[i]=nums[j];
    nums[j]=tmp;
}

int* sortArrayByParityII(int* nums, int numsSize, int* returnSize){
    int j=1;
    for(int i=0;i<numsSize;i+=2){
        if(nums[i]%2==1){
            while(nums[j]%2==1)
              j+=2;
            swap(nums,i,j);
            j+=2;
    *returnSize=numsSize;
    return nums;
}
}