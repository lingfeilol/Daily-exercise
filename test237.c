class MinStack {
public:
        stack<int>s1;//正常逻辑
        stack<int>s2;//只存最小值
    /** initialize your data structure here. */
    MinStack() {
        s2.push(INT_MAX);
    }
    
    void push(int x) {
        s1.push(x);
        s2.push(min(x,s2.top()));
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */