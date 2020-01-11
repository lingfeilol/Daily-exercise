//1.暴力解法，一次一次旋转
void rotate(int* nums, int numsSize, int k){
     while(k--)
     {
         int tmp=nums[numsSize-1];
         for(int i=numsSize-1;i>0;i--)
         {
             nums[i]=nums[i-1];
         }
         nums[0]=tmp;
     }



//2.反转三次   先整体反转，再反转【0，k-1】，再反转【k，numsSize-1】
void reversal(int *nums,int start,int end)
{
    while(start<end)
    {
        int tmp=nums[start];
        nums[start]=nums[end];
        nums[end]=tmp;
        start++;
        end--;
    }
}
void rotate(int* nums, int numsSize, int k){
    k %= numsSize;//控制k,可能大于总长度
    reversal(nums,0,numsSize-1);
    reversal(nums,0,k-1);
    reversal(nums,k,numsSize-1);

}