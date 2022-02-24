void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p1=m-1;
    int p2=n-1;
    int mp=nums1Size-1;
    while (p1>=0 && p2>=0)
    {
        if(nums1[p1]>=nums2[p2]){
            nums1[mp]=nums1[p1];
            mp--;
            p1--;
        }else{
            nums1[mp]=nums2[p2];
            mp--;
            p2--;
        }
    }
    if(p2>=0){
        while(p2>=0){
            nums1[mp]=nums2[p2];
            mp--;
            p2--;
        }
    }
}