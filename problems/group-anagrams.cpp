#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> map;
        for(int i = 0; i < strs.size(); i++) {
            string key = "";
            string str = strs[i];
            for(int j = 0; str[j] != 0; j++) {
                for(int k = j + 1; str[k] != 0; k++) {
                    if(str[j] > str[k]) {
                        char a = str[j];
                        str[j] = str[k];
                        str[k] = a;
                    }
                }
            }
            key = str;
            map[key].push_back(strs[i]);
        }

        vector<vector<string>> ans(map.size());
        for(auto it = map.begin(); it != map.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
