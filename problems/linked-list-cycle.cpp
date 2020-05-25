#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) {
            return false;
        }

        ListNode *tmp1 = head, *tmp2 = head;
        while(tmp2->next != NULL && tmp2->next->next != NULL) {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next->next;
            if(tmp1 == tmp2) {
                return true;
            }
        }

        return false;
    }
};
