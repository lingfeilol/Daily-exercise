

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //1.快排
 void swap(int *n1,int *n2)
{
    int tmp=*n1;
    *n1=*n2;
    *n2=tmp;
}
 int _qucksort(int *a,int begin,int end)
 {
     int mid=begin+(end-begin)>>1;
     int key=a[begin];
     int start=begin;//保存第一个基准值位置
     while(begin<end)
     {
        while(begin<end&& a[end]>=key)  //选前面做基准值，要先从后面走
            end--;
        while(begin<end && a[begin]<=key)
            begin++;
        swap(&a[begin],&a[end]);  //满足条件的就可以交换
     }
    swap(&a[begin],&a[start]);
    return begin;
 }
 void qucksort(int *a,int begin,int end )
 {
     if(begin<end)
    {
        int midindex=_qucksort(a,begin,end);
        qucksort(a,begin,midindex-1);
        qucksort(a,midindex+1,end);
    }
 }
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
    qucksort(arr,0,arrSize-1);
    *returnSize=k;
    return arr;

}



//2.堆排序方法
 //建大堆

// void swap(int *n1,int *n2)
// {
//     int tmp=*n1;
//     *n1=*n2;
//     *n2=tmp;
// }
//  void justdown(int *a,int n,int m)  //向下调整算法
//  {
//      int parent=m;
//      int child=parent*2+1;
//      while(child<n)
//      {
//          if(a[child]<a[child+1]&& child+1<n)
//          {
//              child+=1; //选两个孩子中最大的那个 
//          }
//          if(a[child]>a[parent])   
//          {
//             swap(&a[child],&a[parent]);  //换堆顶
//              //继续往下调整
//             parent=child;
//             child=parent*2+1;
//          }
//          else//不比父亲节点大就跳出
// 		{
// 			break;
// 		}
//      }
//  }
// int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
//     if(k==arrSize)
//     {
//         *returnSize=k;
//          return arr;
//     }  
//     //维护一个k大小的大堆
//     for(int i=(k-1-1)/2;i>=0;i--)//从最后一个非叶子节点开始调整
//     {
//         justdown(arr,k,i);
//     }
//     //堆外数据开始对比
//     for(int j=k;j<arrSize;j++)
//     {
//         if(arr[0]>arr[j])//比堆顶小的换进去，再调整
//         {
//             swap(&arr[0],&arr[j]);
//             justdown(arr,k,0);
//         }
//     }
//     *returnSize=k;
//     return arr;
// }
