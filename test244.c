class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ret;
        if(intervals.size()==0)
        {
            return ret;
        }
        sort(intervals.begin(),intervals.end());//默认是第一个从小到大比较
        for(int i=0;i<intervals.size();i++)
        {
            int first=intervals[i][0],second=intervals[i][1];
            if(!ret.size()|| ret.back()[1]<first) //第一个，或者是没有重叠的,直接插入
            {
                ret.push_back({first,second});               
            }
            else //有重叠，需要更新尾巴
            {
                ret.back()[1]=max(ret.back()[1],second);         
            }
        }
        return ret;
    }
};