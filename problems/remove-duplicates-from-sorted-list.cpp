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
        if(head == nullptr) {
            return NULL;
        }

        ListNode *node = head;
        map<int, bool> m;

        while(node->next != nullptr) {
            m[node->val] = true;
            if(m[node->next->val]) {
                node->next = node->next->next;
                continue;
            }
            node = node->next;
        }

        return head;
    }
};
