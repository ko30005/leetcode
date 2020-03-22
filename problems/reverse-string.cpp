#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseString(vector<char> &s) {
        if(s.size() == 0) {
            return;
        }

        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            st.push(s[i]);
        }

        int n = st.size();
        for(int i = 0; i < n; i++) {
            s[i] = st.top();
            st.pop();
        }
    }
};
