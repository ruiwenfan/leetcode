
// first version
/*
int trap(int* height, int heightSize){
    int left_max[heightSize],right_max[heightSize];
    int max=-1; // the number of height is non-negative
    for(int i=0;i<heightSize;i++){
        if(height[i]>max){
            left_max[i]=height[i];
            max=height[i];
        }else{
            left_max[i]=max;
        }
    }
    max=-1;
    for (int i=heightSize-1;i>=0;i--)
    {
        if(height[i]>max){
            right_max[i]=height[i];
            max=height[i];
        }else{
            right_max[i]=max;
        }
    }
    int ans=0;
    int tmp;
    for(int i=0;i<heightSize;i++){
        tmp=fmin(left_max[i],right_max[i]);
        if(height[i]<tmp){
            ans+=tmp-height[i];
        }
    }
    return ans;
}
*/
// second version
int trap(int* height, int heightSize){
    int left_max=-1,right_max=-1; // the number of height is non-negative
    int ans=0;
    int left=0,right=heightSize-1;
    while(left<right){
        left_max=fmax(left_max,height[left]);
        right_max=fmax(right_max,height[right]);
        if(left_max<right_max){
            ans+=left_max-height[left++];
        }else{
            ans+=right_max-height[right--];
        }
    }
    return ans;
}
// ps:int a,b=1; a is 0,b is 1
