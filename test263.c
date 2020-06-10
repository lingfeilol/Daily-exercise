class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret(rowIndex+1);
        for(int i=0;i<=rowIndex;i++)//从第一行开始，根据上一行构造下一行
        {
            ret[i]=1;//每行末尾为1
            for(int j=i;j>1;j--)  //之后从第二行，才有关系，类似于直接初始化了前两行
            {
                ret[j-1]=ret[j-2]+ret[j-1];//从倒数第二个开始计算
            }
        }
        return ret;
    }
};