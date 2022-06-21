https://www.codingninjas.com/codestudio/problems/deque_1170059?leftPanelTab=0

class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr = new int[n];
        front=-1;
        rear=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //check full or not
         if((front==0 && rear==size-1)|| (front!=0 && rear == (front-1)%(size-1)))
        {
             return false;
             }
        //insert in first element
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1)
        {
            front=size-1;
        }
        else
        {
            front--;
        }
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if((front==0 && rear==size-1)|| (front!=0 && rear == (front-1)%(size-1)))
        {return false;}
        //insert in first element
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(front!=0 && rear == size-1)
        {
           rear=0;
        }
        else
        {
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
           if(front==-1){
            //cout<<"Queue is empty";
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear)//single element in queue
        {
            front=rear=-1;
        }
        else if(rear == 0)//when queue's front is in the last elemnt bt we have to push it in 0th index as it is empty
        {
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {  if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (front==-1)
        return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
            if((front==0 && rear==size-1)|| (front!=0 && rear == (front-1)%(size-1)))
        {return true;}
        else
        {
            return false;
        }
    }
};class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr = new int[n];
        front=-1;
        rear=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //check full or not
         if((front==0 && rear==size-1)|| (front!=0 && rear == (front-1)%(size-1)))
        {
             return false;
             }
        //insert in first element
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1)
        {
            front=size-1;
        }
        else
        {
            front--;
        }
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if((front==0 && rear==size-1)|| (front!=0 && rear == (front-1)%(size-1)))
        {return false;}
        //insert in first element
        else if(front == -1)
        {
            front = rear = 0;
        }
        else if(front!=0 && rear == size-1)
        {
           rear=0;
        }
        else
        {
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
           if(front==-1){
            //cout<<"Queue is empty";
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear)//single element in queue
        {
            front=rear=-1;
        }
        else if(rear == 0)//when queue's front is in the last elemnt bt we have to push it in 0th index as it is empty
        {
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {  if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (front==-1)
        return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
            if((front==0 && rear==size-1)|| (front!=0 && rear == (front-1)%(size-1)))
        {return true;}
        else
        {
            return false;
        }
    }
};