https://practice.geeksforgeeks.org/problems/queue-reversal/1#


#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    //Function to reverse the queue.
stack<int>s;
    
    while(!q.empty()){
        int elem = q.front();
        q.pop();
        s.push(elem);
    }
    while(!s.empty()){
        int elem = s.top();
        s.pop();
        q.push(elem);
    }
    return q;
}