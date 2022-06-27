https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
       priority_queue<long long, vector<long long>, greater<long long>> p;
       for(long long i=0;i<n;i++)
          p.push(arr[i]);
       long long res=0;
       while(p.size()>1){
           long long t1=p.top();
           p.pop();
           long long t2=p.top();
           p.pop();
           long long t3=t1+t2;
           res+=t3;
           p.push(t3);
       }
       return res;
   }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends