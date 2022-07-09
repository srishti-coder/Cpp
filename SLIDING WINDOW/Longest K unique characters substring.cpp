https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1#

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        int res = -1;
        unordered_map<char,int> map;
        int j = 0;
        for(int i = 0; i < s.size(); i++)
        {
            map[s[i]]++;
            if(map.size() == k)
            {
                res = max(res,(i-j)+1);
            }
            if(map.size() > k)
            {
                while(map.size() != k)
                {
                    map[s[j]]--;
                    if(map[s[j]] == 0){
                        map.erase(s[j]);
                    }
                    j++;
                }
            }
        }
        return res;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends