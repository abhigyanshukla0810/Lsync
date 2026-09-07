class MyStack {
public:
queue<int> q;
queue<int> q1;
int x = 0, y = 0, z = 0;

    MyStack(){
        
    }
    void push(int x) {
     q.push(x);   
    }
    
    int pop(){
        y = 0;
        while(!q.empty()){
            x = q.front();
            q1.push(x);
            q.pop();
            y++;
        }
        while(y>1){
            z = q1.front();
            q.push(z);
            q1.pop();
            y--;
        }
        q1.pop();
        return x;
    }
    
    int top(){
        while(!q.empty()){
            x = q.front();
            q1.push(x);
            q.pop();
        }
        while(!q1.empty()){
            z = q1.front();
            q.push(z);
            q1.pop();
        }
        return x;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */