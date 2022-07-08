https://leetcode.com/problems/sliding-window-maximum/submissions/

class Solution {
public:
vector<int>maxSlidingWindow(vector<int>&nums, int k) {
vector <int>ans;
list<int> l;
int i=0;
int j=0;

    if (k>nums.size()){                    // if k > length , return one element with the maximum of array.
        ans.push_back(*max_element(l.begin(),l.end()));
        return ans;
    }
    
    while (j<nums.size()){
        while(l.size()>0 && l.back() <nums[j]){    // if list is not empty and last element of list is less than current j element in array ie nums[j].
            l.pop_back();  // remove that from list
        }
        l.push_back(nums[j]);  // push elements into list from array.
        if ((j-i+1)<k)
            j++;
        else if (j-i+1==k){    
            ans.push_back(l.front());   // if size is equals to window size then push first element of list into ans vector.
            if (l.front()==nums[i])
                l.pop_front();
            i++;
            j++;
        }
        
    }
    return ans;
}
}; 
     