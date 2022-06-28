
https://www.codingninjas.com/codestudio/problems/k-max-sum-combinations_975322?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0


#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
{
	priority_queue<int> maxh;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum=a[i]+b[j];
            maxh.push(sum);
        }
    }
            vector<int>ans;
    while(k--)
            {
                ans.push_back(maxh.top());
        maxh.pop();
            }
        
    return ans;
    
}