https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution
{
public:
    vector<int> finalPrices(vector<int>& p)
{
int n=p.size();
stack <int> st;
vector <int> v;
for(int i=n-1;i>=0;i--)
{
while(!st.empty() && st.top()>p[i])
st.pop();

        if(st.empty())
            v.push_back(0);
        
        else
            v.push_back(st.top());
        
        st.push(p[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        v[i]=p[i]-v[i];
    }
    return v;
}

};