//1.先排序再取中间值  时间复杂度O（nlogn） 空间复杂度O（1）
// int compare(void* n1,void* n2)
// {
//     return *(int*)n1-*(int*)n2;
// }
// int majorityElement(int* nums, int numsSize){
//     int k=numsSize/2;
//     qsort(nums,numsSize,sizeof(int),compare);
//     return nums[k];
// }

//2.鸽巢原理  时间复杂度O（n）空间O（n）
// int majorityElement(int* nums, int numsSize){
//     int* ret=(int*)calloc(numsSize,sizeof(int));
//     for(int i=0;i<numsSize;i++)
//     {
//         ret[nums[i]]++;
//         if(ret[nums[i]]>numsSize/2)
//             return nums[i];
//     }
//     return -1;

// }

//3.摩尔投票法  时间O（n） 空间O(1)
 int majorityElement(int* nums, int numsSize){
     int num=nums[0];
     int count=1;
     for(int i=1;i<numsSize;i++)
     {
         if(nums[i]==num) count++;
         else count--;
         if(count==0)
         {
             num=nums[i];
             count=1;
         }
     }
     return num;
}

