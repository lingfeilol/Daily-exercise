/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* selfDividingNumbers(int left, int right, int* returnSize){
    *returnSize = 0;
    int n=right-left+1;
    int* arr=(int*)malloc(sizeof(int)*n);
    int i=0;
    while(left <= right){
        int flag = 0,temp = left;
        while(temp > 0){
            int b = temp % 10;
            if(b == 0 || left % b != 0){
                flag = 1;
                break;
            }
            temp = temp / 10;
        }
        if(flag == 0){
            arr[i] = left;
            i++;
            (*returnSize)++;
        }
        left++;
    }
    return arr;
}