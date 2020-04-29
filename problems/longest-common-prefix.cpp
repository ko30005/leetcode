#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        if(strs.size() == 0) {
            return "";
        } else if(strs.size() == 1) {
            return strs[0];
        }

        string ans = "";
        int i = 0;
        while(true) {
            for(int j = 1; j < strs.size(); j++) {
                if(strs[j][i] == NULL) {
                    return ans;
                }
                if(strs[0][i] != strs[j][i]) {
                    return ans;
                }
            }

            ans += strs[0][i];
            i++;
        }

        return ans;
    }
};
