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
    int rangeSumBST(TreeNode *root, int L, int R) {
        if(root == NULL) {
            return 0;
        }

        int val = 0;
        if(root->val >= L && root->val <= R) {
            val = root->val;
        }

        return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R) +
               val;
    }
};
