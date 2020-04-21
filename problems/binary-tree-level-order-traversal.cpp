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
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        queue<TreeNode *> que;

        if(root != NULL) {
            que.push(root);
        }

        while(!que.empty()) {
            int size = que.size();
            vector<int> level;
            ans.push_back(level);

            for(int i = 0; i < size; i++) {
                TreeNode *cur = que.front();
                ans.back().push_back(cur->val);
                que.pop();

                if(cur->left != NULL) {
                    que.push(cur->left);
                }
                if(cur->right != NULL) {
                    que.push(cur->right);
                }
            }
        }

        return ans;
    }
};
