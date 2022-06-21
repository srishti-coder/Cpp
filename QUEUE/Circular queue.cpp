https://www.codingninjas.com/codestudio/problems/circular-queue_1170058?leftPanelTab=0

class CircularQueue{
    
    int *arr;
    int front;
    int rear;
    int size;
    public:
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        front=rear=-1;
     
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        if((front==0 && rear==size-1)|| (rear == (front-1)%(size-1)))
           {
            //cout<<"Queue if full";
            return false;
            }
           else if(front==-1)
               {
                   front=rear=0;
               }
           else if(front!=0 && rear == size-1)
           {
               rear=0;
           }
           else 
           {
               rear++;
            }
           arr[rear]=value;
           return true;
           }
        

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        
        if(front==-1){
            //cout<<"Queue is empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear)//single element in queue
        {
            front=rear=-1;
        }
        else if(front==size-1)//when queue's front is in the last elemnt bt we have to push it in 0th index as it is empty
        {
            front=0;
        }
        else{
            front++;
        }
        return ans;
    }
};