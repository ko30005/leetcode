#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *middleNode(ListNode *head) {
        if(head == NULL) {
            return head;
        }

        int count = 0;
        ListNode *tmp = head;
        while(head != NULL) {
            count++;
            head = head->next;
        }

        if(count == 1) {
            return tmp;
        }

        ListNode *ans = new ListNode(0);

        int mid = count / 2;
        for(int i = 0; i != mid; i++) {
            ans->next = tmp;
            ans = ans->next;
            tmp = tmp->next;
        }

        return ans->next;
    }
};
