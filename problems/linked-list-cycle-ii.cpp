#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) {
            return NULL;
        }
        map<ListNode *, bool> m;

        while(head != nullptr) {
            if(m[head]) {
                return head;
            }
            m[head] = true;
            head = head->next;
        }

        return head;
    }
};
