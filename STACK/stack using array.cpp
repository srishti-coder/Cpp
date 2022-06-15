https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1/?page=2&category[]=Stack&sortBy=accuracy#

//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    
   top++;
   arr[top]=x;
   // Your Code
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top == -1)
    return-1;
    
    int val=arr[top];
    top--;
   return val ;// Your Code       
}
