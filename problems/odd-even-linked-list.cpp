#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *oddEvenList(ListNode *head) {
        if(head == NULL) {
            return head;
        }
        ListNode *odd = new ListNode(0);
        ListNode *even = new ListNode(0);
        ListNode *evenH = even;
        ListNode *ans = odd;
        int i = 1;
        while(head != nullptr) {
            if(i % 2 == 0) {
                even->next = new ListNode(head->val);
                even = even->next;
            } else {
                odd->next = new ListNode(head->val);
                odd = odd->next;
            }
            head = head->next;
            i++;
        }
        odd->next = evenH->next;

        return ans->next;
    }
};
