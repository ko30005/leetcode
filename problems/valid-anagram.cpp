#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }

        vector<char> strS;
        vector<char> strT;

        for(int i = 0; i < s.length(); i++) {
            strS.push_back(s[i]);
            strT.push_back(t[i]);
        }
        sort(strS.begin(), strS.end());
        sort(strT.begin(), strT.end());

        for(int i = 0; i < s.length(); i++) {
            if(strS[i] != strT[i]) {
                return false;
            }
        }
        return true;
    }
};
