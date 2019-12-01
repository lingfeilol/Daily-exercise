void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int a=m-1;//从后往前处理
    int b=n-1;
    int c=m+n-1;
     while(a >= 0 && b >= 0)
        {
            nums1[c--] = (nums1[a] > nums2[b]) ? nums1[a--] : nums2[b--]; 
        }
    while(b >=0)//当nums1为空
        nums1[c--] = nums2[b--];  
}