https://leetcode.com/problems/valid-parentheses/


class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
       /* push ( ,{,[ in the stack */
        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
                
            }
        /*Compare the strig elemnt with the top*/    
            else if(!st.empty()){
                if(s[i] == ')' && st.top() == '(')
                    st.pop();
                else if(s[i] == '}' && st.top() == '{')
                    st.pop();
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                else 
                    return false;
            }
            else 
                return false;
        }
        if(!st.empty()) return false;
        return true;
    }
}; 
   