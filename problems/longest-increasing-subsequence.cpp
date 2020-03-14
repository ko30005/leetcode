#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lengthOfLIS(vector<int> &nums) {
        int n = nums.size(), i = 0, j = 0, maxLen = 0, temp = 0;
        vector<int> length_dp(n, 1);

        for(i = 0; i < n; ++i) {
            for(j = 0; j < i; ++j) {
                if(nums[i] > nums[j] && length_dp[i] < length_dp[j] + 1) {
                    length_dp[i] = length_dp[j] + 1;
                }
            }

            if(maxLen < length_dp[i])
                maxLen = length_dp[i];
        }

        return maxLen;
    }
};
