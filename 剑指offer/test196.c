class MaxQueue {
public:
    queue<int> q1; //正常队列逻辑
    deque<int> q2; //双端队列来实现单调队列，
        //即当前值与队列前面存在的值比较，要是我比你们大的，你们全部出去，进去，除非有比我还大的，我就当次大的，排在你后面           相当于是个单调递减的队列
    MaxQueue() {
       
    }
    
    int max_value() {
        if(q2.empty())//单调队列为空，说明还没最大值
        {
            return -1;
        }  
        return q2.front();  //单调队列里的对头一直是维护的最大值
    }
    
    void push_back(int value) {
        q1.push(value);

        if(q2.empty()) //单调队列一开始为空时
            q2.push_back(value);
        else if(value>q2.front())   //前面的头都比我小 ，全删掉（出队）我来当最大的头
        {
            q2.clear();
            q2.push_back(value);
        }
        else 
        {
            while(q2.back()<value)   //只要是尾部前面的比当前值小的（夹着的），一律出队列
            {
                q2.pop_back();
            }
            q2.push_back(value);
        }
    }
    
    int pop_front() {
        if(q1.empty()) //队列为空
        {
            return -1;
        }
        //头删时也要考虑，删去的头是不是和单调队列里的最大值相等，要删的话必须都要删掉
        int tmp=q1.front();
        q1.pop();
        if(tmp==q2.front())
        {
            q2.pop_front();
        }
        return tmp;
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */