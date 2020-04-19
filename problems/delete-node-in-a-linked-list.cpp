#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *node = head;
        ListNode *prev = NULL;
        ListNode *dummy = head;

        if(head == NULL) {
            return head;
        }

        while(node != NULL) {
            if(node->val == val) {
                if(node->next == NULL) {
                    if(prev == NULL) {
                        return NULL;
                    }
                    prev->next = NULL;
                    break;
                }

                node->val = node->next->val;
                node->next = node->next->next;
                continue;
            }

            prev = node;
            node = node->next;
        }

        if(head->val == val) {
            return dummy->next;
        }

        return dummy;
    }
};
