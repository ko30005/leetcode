#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rob(vector<int> &nums) {
        int pre = 0, cur = 0;
        for(int i = 0; i < nums.size(); i++) {
            int tmp = max(cur, pre + nums[i]);
            pre = cur;
            cur = tmp;
        }
        return cur;
    }
};
