#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    bool isPalindrome(ListNode *head) {
        vector<int> v;
        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        int began = 0;
        int end = v.size();

        while(began < end) {
            if(v[began] != v[end]) {
                return false;
            }
        }

        return true;
    }
};
