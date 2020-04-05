#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *swapPairs(ListNode *head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }

        ListNode *firstNode = head;
        ListNode *secondNode = head->next;

        ListNode *res = swapPairs(head->next->next);

        head = secondNode;
        head->next = firstNode;
        head->next->next = res;
        return head;
    }
};
