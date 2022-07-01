https://www.codingninjas.com/codestudio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0

#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int, vector<int>, greater<int> > minh;
    
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(minh.size()<k)
            { 
                minh.push(sum);
         }
    
    else 
        if(sum>minh.top())
           {
            minh.pop();
            minh.push(sum);
               
           }
}    
}

return minh.top();
}