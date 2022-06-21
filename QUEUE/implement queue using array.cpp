
https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908


class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        size=100001;
        arr= new int[size];
        qfront=0;
        rear=0;
              
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() 
    {
        if(qfront==rear)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear==size)
            cout<<"Queue is full"<<endl;
        else
        {
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront==rear)
        {
            return -1;
         }
        else
        {
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
         //to uilize the size..suppose front ad array are in index 2 ao to utalize the index 0 and 1 which are empty we will use this step.
      
            if(qfront==rear)
            {
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
       if(qfront==rear)
       {
           return -1;
       }
        else 
        {
          return 
          arr[qfront];
    }
    }
};

tc =O(1)