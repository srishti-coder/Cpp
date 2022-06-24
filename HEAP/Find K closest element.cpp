
https://leetcode.com/problems/find-k-closest-elements/

 class Solution {
public:
    #define pi pair<int,int>
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi> pq;
        for(int i=0;i<arr.size();i++) {
            pq.push({abs(arr[i]-x), arr[i]});
            if(pq.size()>k) pq.pop();
        }
        priority_queue<int> q;
        while(!pq.empty()) {
            q.push(pq.top().second);
            pq.pop();
        }
        vector<int> ans;
        while(!q.empty()) {
            ans.push_back(q.top());
            q.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};