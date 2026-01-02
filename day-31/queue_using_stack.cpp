class MyQueue {
public:
    deque<int> dq;

    MyQueue() {
        
    }
    
    void push(int x) {
        if(dq.empty()) dq.push_back(x);
        else{
            dq.push_back(x);

        }
        
    }
    
    int pop() {
        if(dq.empty()) return -1;
        else{
            int x=dq.front();
            dq.pop_front();
            return x;
        }
    }
    
    int peek() {
        if(dq.empty()) return -1;
        else{
            return dq.front();
        }
        
    }
    
    bool empty() {
        if(dq.empty()) return true;
        else return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */