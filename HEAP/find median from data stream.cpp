https://leetcode.com/problems/find-median-from-data-stream/submissions/

class MedianFinder {
public:
    double median = 0;
    priority_queue<double> maxheap;
    priority_queue<double, vector<double>, greater<double>> minheap;
    
    int signum(int a,int b){
        if(a==b) return 0;
        else if(a > b) return 1;
        else return -1;
    }
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        switch(signum(maxheap.size() , minheap.size())){
            case 0: if(num > median){
                minheap.push(num);
                median = minheap.top();
            }else{
                maxheap.push(num);
                median = maxheap.top();
            }
            break;
            case 1: if(num > median){
                minheap.push(num);
                median = (minheap.top() + maxheap.top())/2;
            }else{
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(num);
                median = (minheap.top() + maxheap.top())/2;
            }
            break;
            case -1: if(num > median){
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(num);
                median = (minheap.top() + maxheap.top())/2;
            }else{
                maxheap.push(num);
                median = (minheap.top() + maxheap.top())/2;
            }
            break;
        }
    }
    
    double findMedian() {
        return median;
    }
};
/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */