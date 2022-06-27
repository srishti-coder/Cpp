https://leetcode.com/problems/sort-array-by-increasing-frequency/


class Solution {

public:
    
    static bool compare(const pair<int, int> &a, const pair<int, int> &b) 
         
    {
    if(a.second == b.second) return a.first > b.first;
    return a.second< b.second;
    }
 
    
    vector<int> frequencySort(vector<int>& nums) {
	    // 1. count frequency
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        // 2. push {number, frequency} into vector
        vector<pair<int, int>> v;
        for(auto m: mp) {
            v.push_back({m.first, m.second});
        }
        // 3. sort vector by 1st) frequency in ascending order, 2nd) number in descending order
        
        sort(v.begin(), v.end(), compare);
        
        // 4. push number into answer vector
        vector<int> ans;
        for(auto p: v) {
		    // p.second is frequency for p.first
            for(int i = 0; i < p.second; i++) {
                ans.push_back(p.first);
            }
        }
        
        return ans;
    }
};

//A. if the frequencies are same, then print in decreasing order of value (so, in case of same frequency, he is returning true, if a is bigger than b)

//B. and if frequency of a is less than b, then definitely return true (to sort in increasing order of frequency)