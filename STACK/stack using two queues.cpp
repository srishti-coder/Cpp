https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    
        queue<int>q1;
        queue<int>q2;
        long long int a;

    
    void push(int x) {
        
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
            
        }
        swap(q1,q2);        
    }
    
    int pop() {
        a=q1.front();
        q1.pop();  
        return a;
    }
    
    int top() {
       return q1.front(); 
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        else return false;
        
    }
};
