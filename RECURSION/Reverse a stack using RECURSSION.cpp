https://practice.geeksforgeeks.org/problems/reverse-a-stack/1/#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution{
public:
    vector<int> V;
    void insert(stack<int> &St,int val,vector<int> &V)
    {
        if(St.empty())
        {
            V.push_back(val);
            return;
        }
        int v = St.top(); 
        St.pop();
        insert(St,val,V);
        St.push(v);
    }
    vector<int> Reverse(stack<int> St)
    {
        if(St.empty()) 
        return V;
        int val = St.top();
        St.pop();
        
        insert(St,val,V);
        Reverse(St);
        
        return V;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends