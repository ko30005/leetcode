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
        if(head == nullptr) {
            return false;
        }
        map<ListNode *, bool> m;
        int count = 0;

        while(head != nullptr) {
            if(m[head]) {
                return true;
            }
            m[head] = true;
            count++;
            head = head->next;
        }
        return false;
    }
};
