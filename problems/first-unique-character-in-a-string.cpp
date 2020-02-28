#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstUniqChar(string s) {
        if(s.empty())
            return -1;

        unordered_map<char, int> counts;
        for(char c : s) {
            ++counts[c];
        }

        for(int i = 0; i < s.size(); ++i) {
            if(counts[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
