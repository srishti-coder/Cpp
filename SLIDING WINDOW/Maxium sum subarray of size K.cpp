// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long mx=INT_MIN;
        int i=0;
        int j=0;
        long sum=0;
        while(j<N)
        {
            sum=sum+Arr[j];
            
            if((j-i+1)<K)
            {
                j++;
            }
            
            else if((j-i+1)==K)
            {
                mx=max(sum,mx);
                sum=sum-Arr[i];//if this not added then previous window ele will also be added
                i++;
                j++;
            }
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends
