https://leetcode.com/problems/k-closest-points-to-origin/

class Solution 
{
public:
    # define pi pair<int,pair<int,int>>
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
    priority_queue <pi> maxh;
        for(int i=0;i<points.size();i++)
        {
           long long int d=abs(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            maxh.push({d,{points[i][0],points[i][1]}});
                      while(maxh.size()>k)
                      {
                          maxh.pop();
                      
                      }
        }
                      vector<vector<int>>res;
            while(maxh.size()>0)
                      {
                      pair<int,int> p = maxh.top().second; 
        res.push_back({p.first,p.second});   
                maxh.pop();
                      }
        
        
        return res;
        
    }
};