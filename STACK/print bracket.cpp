class Solution{
public:	

	
vector<int> barcketNumbers(string str)
{
    // Your code goes here
    vector<int> ans;
    int cnt=0;
    stack<int> st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
        {
            cnt++;
            st.push(cnt);
            ans.push_back(st.top());
        }
        else if(str[i]==')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}