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
    TreeNode *searchBST(TreeNode *root, int val) {
        if(root == NULL) {
            return NULL;
        }

        if(root->val == val) {
            return root;
        }

        TreeNode *leftnode = searchBST(root->left, val);
        TreeNode *rightnode = searchBST(root->right, val);
        TreeNode *node = leftnode ? leftnode : rightnode;

        return node;
    }
};
