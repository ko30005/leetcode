#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int searchInsert(vector<int> &nums, int target) {
        int pivot, left = 0, right = nums.size() - 1;
        while(left <= right) {
            pivot = left + (right - left) / 2;
            if(target == nums[pivot]) {
                return pivot;
            } else if(target > nums[pivot]) {
                left = pivot + 1;
            } else {
                right = pivot - 1;
            }
        }
        return left;
    }
};
