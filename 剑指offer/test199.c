class CQueue {
public:
    stack <int>s1;  //放数据
    stack <int>s2;  //到数据好出队
    CQueue() {
    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if(s1.empty()) return -1;  //存数据的栈为空，返回-1
        while(!s1.empty())  //先到数据到s2
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ret=s2.top(); 
        s2.pop();   //删除栈顶
        //再把数据倒回去
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */