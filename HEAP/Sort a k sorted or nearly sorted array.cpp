https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0#

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   priority_queue<int,vector<int>,greater<int>> pq;
   vector<int> ans;
   for(int i=0;i<n;i++)
   {
       
           pq.push(a[i]);
           if(pq.size()>k)
       
       {
          
           ans.push_back(pq.top());
           pq.pop();
       }
   }
   while(!pq.empty())
   {
           ans.push_back(pq.top());
           pq.pop();
   }
   for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
return 0;
}