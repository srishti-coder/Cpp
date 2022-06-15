
https://leetcode.com/problems/implement-stack-using-queues/


class MyStack {
public:
    queue<int>q1;
    
    void push(int x) {
        
        q1.push(x);
        int n=q1.size();
        for(int i=0;i<n-1;i++){
            int fr = q1.front();
            q1.pop();
            q1.push(fr);
        }
    }
    
    int pop() {
        int val=q1.front();
            q1.pop();
        return val;
    }
    
    int top() {
        
     return q1.front();
        
    }
    
    bool empty() {
       return q1.empty();
    }
};



