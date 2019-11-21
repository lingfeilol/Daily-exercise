/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int maxsize=nums1Size>nums2Size?nums2Size:nums1Size;
    int* nums3=(int*)malloc(sizeof(int)*maxsize);
    *returnSize=0;
    int i,j,k,n=0;
    for(i=0;i<nums1Size;i++)
    {   
      for(j=0;j<nums2Size;j++)
      {
          if(nums1[i]==nums2[j])
          {
             for(n=0;n<*returnSize;n++)//在判断之后是否出现相同的重复数字
             {
                if(nums1[i]==nums3[n])
                {
                    break;  
                }
             }
             if(n==*returnSize)
             {
                nums3[*returnSize]=nums1[i];
                (*returnSize)++;
                break;   
             }
          }   
      }         
    }   
    return nums3;

}