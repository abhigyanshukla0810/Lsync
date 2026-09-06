class MyQueue {
public:
    stack<int> st;
    stack <int> st1;
    MyQueue() {
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int x = 0;
        int y = 0;
        while(!st.empty()){
            x = st.top();
            st1.push(x);
            st.pop();
        }
        x = st1.top();
        st1.pop();
        while(!st1.empty()){
            y = st1.top();
            st1.pop();
            st.push(y);
        }
        return x;
    }
    
    int peek() {
        int x = 0;
        while(!st.empty()){
            x = st.top();
            st1.push(x);
            st.pop();
        }
        x = st1.top();
        int y = 0;
        while(!st1.empty()){
            y = st1.top();
            st1.pop();
            st.push(y);
        }
        return x;
        return x;
    }
    
    bool empty(){
        if(st.empty()) return true;
        return false;
        
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