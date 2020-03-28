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
    bool hasPathSum(TreeNode *root, int sum) {
        if(root == NULL) {
            return false;
        }

        int newSum = sum - root->val;
        if(newSum == 0 && root->left == NULL && root->right == NULL) {
            return true;
        }

        return hasPathSum(root->left, newSum) ||
               hasPathSum(root->right, newSum);
    }
};
