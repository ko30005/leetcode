#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int searchTemplate(vector<int> &nums, int target, int left, int right) {
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] < target) {
                left = mid + 1;
            } else if(nums[mid] > target) {
                right = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int> &nums, int target) {
        if(nums.size() == 0) {
            return -1;
        } else if(nums.size() == 1) {
            if(nums[0] == target) {
                return 0;
            }
            return -1;
        }

        int rotedI = nums.size();
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i - 1] >= nums[i]) {
                rotedI = i;
            }
        }

        int ans = searchTemplate(nums, target, 0, rotedI - 1);
        if(ans != -1) {
            return ans;
        } else if(rotedI == nums.size()) {
            return -1;
        }

        return searchTemplate(nums, target, rotedI, nums.size() - 1);
    }
};
