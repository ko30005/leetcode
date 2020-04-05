#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, bool> map;
        for(int i = 0; i < J.length(); i++) {
            map[J[i]] = true;
        }
        int ans = 0;

        for(int i = 0; i < S.length(); i++) {
            if(map[S[i]]) {
                ans++;
            }
        }

        return ans;
    }
};
