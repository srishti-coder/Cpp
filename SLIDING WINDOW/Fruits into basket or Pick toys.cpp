https://leetcode.com/problems/fruit-into-baskets/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>mp;
        int i=0,j=0;
        int mx=INT_MIN;
        while(j<n)
        {
            mp[fruits[j]]++;
            
            
              if(mp.size() <= 2)
             {
                 mx=max(mx,j-i+1);
                     j++;
             }
       
          else if(mp.size()>2)
            {
                while(mp.size()>2)
                { 
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)
                        mp.erase(fruits[i]);
                        i++;
                }
                j++;
                
            }
          
        }
        return mx;
    }
};