#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int> &nums) {
        int pivot, left = 0;
        int right = nums.size() - 1;

        if(nums.size() == 1) {
            return nums[0];
        }

        if(nums[0] < nums[right]) {
            return nums[0];
        }

        while(left <= right) {
            pivot = left + (right - left) / 2;
            cout << pivot << endl;
            if(nums[pivot] > nums[pivot + 1]) {
                return nums[pivot + 1];
            }

            if(nums[pivot] < nums[pivot - 1]) {
                return nums[pivot];
            }

            if(nums[pivot] > nums[0]) {
                left = pivot + 1;
            } else {
                right = pivot - 1;
            }
        }

        return nums[pivot];
    }
};
