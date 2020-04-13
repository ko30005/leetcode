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
    int maxAns;

    int depth(TreeNode *node) {
        if(node == NULL) {
            return 0;
        }
        int L = depth(node->left);
        int R = depth(node->right);
        maxAns = max(maxAns, L + R + 1);
        return max(L, R) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root) {
        maxAns = 1;
        depth(root);
        return maxAns - 1;
    }
};
