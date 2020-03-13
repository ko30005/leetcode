#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
    ListNode *reverseList(ListNode *head) {
        if(head == nullptr) {
            return head;
        }

        stack<int> st;
        while(head != nullptr) {
            st.push(head->val);
            head = head->next;
        }

        ListNode *ans = new ListNode(st.top());
        st.pop();
        ListNode *dummy = ans;
        while(st.size() != 0) {
            dummy->next = new ListNode(st.top());
            st.pop();
            dummy = dummy->next;
        }
        return ans;
    }
};
