https://practice.geeksforgeeks.org/problems/sort-a-stack/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void sortedInsert(stack<int> &st, int x){
   if(st.empty() || x >= st.top()){
       st.push(x);
       return ;
   }
   int temp = st.top();
   st.pop();
   
   sortedInsert(st, x);
   st.push(temp);
}

void sorting(stack<int> &st){
   if(st.empty()){
       return;
   }
   int x = st.top();
   st.pop();
  
   sorting(st);
   sortedInsert(st, x);
}

void SortedStack :: sort()
{
  //Your code here
   sorting(s);
}