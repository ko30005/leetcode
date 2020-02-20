#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubArray(vector<int> &nums) {
        if(nums.size() == 0) {
            return 0;
        }

        int curSum = nums[0];
        int maxSum = nums[0];
        for(int i = 0; i < nums.size(); ++i) {
            curSum = max(nums[i], curSum + nums[i]);
            maxSum = max(maxSum, curSum);
        }

        return maxSum;
    }
};
