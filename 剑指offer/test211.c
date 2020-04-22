class Solution {
public:
//思路：只需要关注奇数的个数，利用奇数之间的间距来 使用 组合的逻辑求出当前窗口的答案情况 
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int > tmp;
        int ret=0;
        tmp.push_back(-1); //先在前面插入一个假的奇数位 ，做左边base
        int i,j=0;
        int n=nums.size();
        for(i=0;i<n;i++) //把奇数的下标保存到一个数组中
        {
            if(nums[i]%2==1)
                tmp.push_back(i);
        }
        tmp.push_back(n);//在后面也差一个假奇数位，做右边base
        //滑动窗口
        int len=tmp.size()-2; //奇数个数
        for(i=1;i<=len;i++)  //窗口左边界  ，从第一位奇数开始
        {
            j=i+k-1;  //窗口右边界
            if(j>len)
                break; //超出范围了，没有满足的情况
            ret+=(tmp[i]-tmp[i-1])*(tmp[j+1]-tmp[j]);//前面奇数之间的间隔 后面奇数之间的间隔
        }
        return ret;
    }
};