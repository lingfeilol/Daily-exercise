//按字典序对数组里的元素排序  就是先将其转换成字符串在比较

int compare(void* s1,void *s2)
{
    int tmps1=*(int*)s1;
    int tmps2=*(int*)s2;
    char* tmp1=(char*)calloc(101,sizeof(char));
    char* tmp2=(char*)calloc(101,sizeof(char));
    sprintf(tmp1,"%d",tmps1);
    sprintf(tmp2,"%d",tmps2);

    char * tmp=tmp1;
    strncat(tmp1,tmp2,strlen(tmp2));//拼接再比较
    strncat(tmp2,tmp,strlen(tmp));
    return strcmp(tmp1,tmp2);
}   
char* minNumber(int* nums, int numsSize){
    if ((nums == NULL) || (numsSize == 0)) {
        return NULL;
    }
    qsort(nums,numsSize,sizeof(int),compare);
    char *ret=(char*)calloc(1000,sizeof(char));
    for(int i=0;i<numsSize;i++)
    {
        char* tmp=(char*)calloc(101,sizeof(char));
        sprintf(tmp,"%d",nums[i]);
        strncat(ret,tmp,strlen(tmp));
    }
    return ret;

}