https://leetcode.com/problems/minimum-window-substring/submissions/

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        for(char c:t) m[c]++;;
        int count=m.size(), i=0, j=0,  minl=INT_MAX, start=0;
        while(j<s.size()){
            if(m.find(s[j]) != m.end()){
                m[s[j]]--;
                if(m[s[j]]==0) count--;
            }
            while(count==0){
                if(j-i+1 < minl){
                    minl=j-i+1;
                    start=i;
                }
                if(m.find(s[i]) != m.end()){
                    m[s[i]]++;
                    if(m[s[i]] == 1) count++;
                }
                i++;
            }
            j++;
        }
        return minl==INT_MAX ? "" : s.substr(start, minl);
    }
};