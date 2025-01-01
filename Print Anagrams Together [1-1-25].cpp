Print Anagrams Together


#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        map<string,vector<string>> mp;
        
                // Step 1: Process each string in the input array
        for (string &s : arr) {
            // Create a copy of the current string
            string temp(s);
            // Sort the copied string to form the "sorted key"
            sort(temp.begin(), temp.end());
            // Group the original string under this key
            mp[temp].push_back(s);
        }

        // Step 2: Collect the grouped anagrams into the result
        vector<vector<string>> ans;
        for (auto &x : mp) {
            ans.push_back(x.second);
        }

        // Step 3: Sort the outer vector for lexicographic order of groups
        sort(ans.begin(), ans.end());
        
                return ans;

    }
};

