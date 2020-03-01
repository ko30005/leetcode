#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int sum = 0;
        ListNode *dummy = new ListNode(0), *head = dummy;
        int isAd = false;
        while(l1 || l2) {
            int tmpSum = 0;
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;

            tmpSum = val1 + val2;

            if(isAd)
                tmpSum++;

            isAd = false;
            if(tmpSum >= 10) {
                tmpSum = tmpSum % 10;
                isAd = true;
            }

            dummy->next = new ListNode(tmpSum);
            dummy = dummy->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if(isAd) {
            dummy->next = new ListNode(1);
        }
        return head->next;
    }
};
