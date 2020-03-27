#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
  public:
    TreeNode *toBST(vector<int> &nums, int start, int end) {
        if(start >= end) {
            return NULL;
        }

        int pivot = (end + start) / 2;

        TreeNode *head = new TreeNode(nums[pivot]);
        head->left = toBST(nums, start, pivot);
        head->right = toBST(nums, pivot + 1, end);
        return head;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums) {
        return toBST(nums, 0, nums.size());
    }
};
