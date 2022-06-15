https://practice.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/1
class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
      cloned.swap(st);  //code here
    }
};