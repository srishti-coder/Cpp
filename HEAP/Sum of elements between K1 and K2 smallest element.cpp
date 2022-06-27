// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        priority_queue <long long> minh;
    for(int i=0;i<n;i++){
    minh.push(arr[i]);
    if(minh.size()>k1)
    minh.pop();} 
    int first=minh.top();
    priority_queue <long long> minh1;
    for(int i=0;i<n;i++){
    minh1.push(arr[i]);
    if(minh1.size()>k2)
    minh1.pop();}
    long long  sum=0;
    int second=minh1.top();
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first&&arr[i]<second)
        sum=sum+arr[i];
        
    }
   //v.push_back(sum);
  return sum;
    }
};
https://practice.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/1#


// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends