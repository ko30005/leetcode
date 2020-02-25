#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rob(vector<int> &nums) {
        if(nums.size() == 0) {
            return 0;
        }

        if(nums.size() == 1) {
            return nums[0];
        }

        int n = nums.size(), pre = 0, cur = 0;
        for(int i = 0; i < n - 1; i++) {
            int tmp = max(pre + nums[i], cur);
            pre = cur;
            cur = tmp;
        }

        int result1 = cur;

        n = nums.size(), pre = 0, cur = 0;
        for(int i = 1; i < n; i++) {
            int tmp = max(pre + nums[i], cur);
            pre = cur;
            cur = tmp;
        }

        int result2 = cur;
        return max(result1, result2);
    }
};
