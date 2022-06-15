https://leetcode.com/problems/min-stack/

class MinStack {
   stack<long long int>s;
    long long int minele;
         
    public:
    MinStack()
    {
        minele=INT_MAX;
    }

    
    void push(long long int val) {
        
        if(s.size()==0)
        {
            s.push(val);
            minele=val;
        }
        else {
            if(val>=minele)
            s.push(val);
        else 
        { if(val<minele)
            s.push(2*val-minele);
                minele=val;
        }
        }      
    }
    
      void pop() {
       if (s.empty())return;
            long long el=s.top();
                s.pop();
                if(el < minele){ 
                minele = 2 * minele-el;
         }
     }
    
    int top() {
        if(s.size()==0)
            return -1;
        long long tp=s.top();
        if(tp<minele)
            return minele;
        return tp;  
       }
    
    int getMin() {
        return minele;
         }
};