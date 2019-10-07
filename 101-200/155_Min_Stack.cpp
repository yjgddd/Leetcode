//模拟栈并实现push、pop、top、getMin操作
class MinStack {
public:
    /** initialize your data structure here. */
    multiset <int> s;//有序，允许重复
    vector <int> vec;
    MinStack() {
        
    }
    
    void push(int x) {
        vec.push_back(x);
        s.insert(x);
    }
    
    void pop() {
        int top=vec[vec.size()-1];
        vec.pop_back();
        auto i=s.find(top);
        s.erase(i);
    }
    
    int top() {
        return vec[vec.size()-1];
    }
    
    int getMin() {
        return *s.begin();//返回最小的元素
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
