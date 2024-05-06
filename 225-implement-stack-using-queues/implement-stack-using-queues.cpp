class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1;
    queue<int> q2;
    
    void push(int x) {
        //push the element in q2
        q2.push(x);
        //push all the elements of q1 to q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        //push all the elements of q2 to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }   
    }
    
    int pop() {
        int pop=-1;
        pop=q1.front();
        q1.pop();
        return pop;
        
    }
    
    int top() {
        int top=q1.front();
        return top;
        
    }
    
    bool empty() {
        return q1.empty();
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