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
    bool isValidBST(TreeNode *root) {
        if(root == NULL) {
            return true;
        }

        return true;
    }
};
