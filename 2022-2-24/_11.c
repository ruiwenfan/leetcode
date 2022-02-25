// first try
/*
int maxArea(int* height, int heightSize){
    int left=0,right=heightSize-1;
    int ans=0;
    while(left!=right){
        int n=fmin(height[left],height[right]);
        ans=fmax(ans,(right-left)*n);
        if(height[left]<=height[right]){
            left++;
        }else{
            right--;
        }
    }
    return ans;
}*/
// second try,better than first version
int maxArea(int* height, int heightSize){
    int left=0,right=heightSize-1;
    int ans=0;
    while(left!=right){
        if(height[left]<=height[right]){
            ans=fmax(ans,height[left]*(right-left));
            left++;
        }else{
            ans=fmax(ans,height[right]*(right-left));
            right--;
        }
    }
    return ans;
}