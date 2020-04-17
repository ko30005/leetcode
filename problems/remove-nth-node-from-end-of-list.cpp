
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(head == NULL || n == 0) {
            return head;
        }
        ListNode *node = head;
        ListNode *cNode = head;
        int count = 0;
        while(cNode != NULL) {
            cNode = cNode->next;
            count++;
        }

        int target = count - (n + 1);
        int ncount = 0;

        if(n == count) {
            return head->next;
        }

        while(node != NULL) {
            if(target == ncount) {
                if(node->next->next == NULL) {
                    cout << node->val << endl;
                    node->next = NULL;
                } else {
                    node->next = node->next->next;
                }
            }
            node = node->next;
            ncount++;
        }

        return head;
    }
};
