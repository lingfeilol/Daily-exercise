#define N 20001
typedef struct {
    int a[N];//正常栈的逻辑
    int b[N];//最小栈 专门存最小值
    int top;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack* obj=(MinStack*)malloc(sizeof(MinStack));
    obj->top=0;
    return obj;
}

void minStackPush(MinStack* obj, int x) {
    if(obj->top==0)
    {
        obj->a[obj->top]=x;
        obj->b[obj->top]=x;
    }
    else
    {
        obj->a[obj->top]=x;
        obj->b[obj->top]=obj->b[obj->top-1]>x? x:obj->b[obj->top-1];  //单调队列 只存最小值，大的一律不存
    }
    obj->top++;
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->a[obj->top-1];
}

int minStackMin(MinStack* obj) {
    return obj->b[obj->top-1];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, x);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackMin(obj);
 
 * minStackFree(obj);
*/