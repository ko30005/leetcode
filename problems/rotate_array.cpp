#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &nums, int k) {
        int len = nums.size();

        if(len == 1) {
            return;
        }

        if(len <= k) {
            k = k - len;
        }

        queue<int> que;
        for(int i = nums.size() - 1; i != len - k - 1; i--) {
            que.push(nums[i]);
            nums.erase(nums.end() - 1);
        }

        auto it = nums.begin();
        for(int i = 0; i != k; i++) {
            it = nums.insert(nums.begin(), que.front());
            it++;
            que.pop();
        }
    }
};
