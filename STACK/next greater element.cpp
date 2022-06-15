https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        
        stack<int>st;
        
         for(int i=nums2.size()-1 ;i>=0;i--)
         {
              if(st.size()==0)
              {
                 mp[nums2[i]]=-1;
              }
             else if( st.top()>nums2[i] )
                 {
                  mp[nums2[i]]=st.top();
                   
                 }
             else {
                     
                     while( st.size()>0  && st.top()<=nums2[i])
                     {
                         st.pop();
                         
                     }
                 
                     if( st.size()==0)
                     {
                          mp[nums2[i]]=-1;
                           
                     }
                     else{
                           mp[nums2[i]]=st.top();
                         
                     }
                     
                 }
               st.push(nums2[i]);
         }
        vector<int>ans;
          for(auto elem : nums1)
          {
             ans.push_back(mp[elem]);
          }
         return ans ; 
                 
    }
};