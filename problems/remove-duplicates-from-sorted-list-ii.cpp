#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *cur = dummy;

        map<int, bool> m;
        m[cur->val] = true;

        while(cur->next && cur->next->next) {
            if(cur->next->val == cur->next->next->val) {
                m[cur->next->val] = true;
                while(cur->next && m[cur->next->val]) {
                    cur->next = cur->next->next;
                }
            } else {
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};
