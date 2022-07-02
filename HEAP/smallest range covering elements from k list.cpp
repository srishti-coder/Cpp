https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/submissions/

// class for heap
class node{
    public:
    int data;
    int i;
    int j;
    node(int data,int row,int col){
        this->data = data;
        i=row;
        j=col;
    }
};

class compare{
    public:
    bool operator()(node* a,node* b){
        return a->data > b->data;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        // Defining MIN Heap
        priority_queue<node*,vector<node*>,compare> pq;
        
        //step1 insert 1st element of each lists in heap and tracking max and min
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i][0]);
            mini = min(mini,nums[i][0]);
            
            pq.push(new node(nums[i][0] , i , 0));
        }
        
        int start = mini;
        int end = maxi;
        
        // processing in heap until its empty
        while(!pq.empty()){
            
            node* top = pq.top();
            pq.pop();
            
            mini = top->data;             //fetching min element
            
            // Updating Answers
            if(maxi - mini < end-start){
                start = mini;
                end=maxi;
            }
            
            // if next element exist of top element then push it into the heap and take track of max element
            
            if(top->j + 1 < nums[top->i].size())//if col is less than the size 
            {
                maxi = max(maxi , nums[top->i][top->j+1]);
                pq.push(new node(nums[top->i][top->j+1] , top->i , top->j+1));
            }
            else{              
                break;    //next ele does'nt exist 
            }
        }
        
        vector<int> ans;
        
        ans.push_back(start);
        ans.push_back(end);
        
        return ans;
    }
    
};
