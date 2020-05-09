#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverseWords(string s) {
        string reverseStr = "";

        for(int i = s.length() - 1; i >= 0; i--) {
            reverseStr += s[i];
        }

        stack<string> st;
        stringstream ss{reverseStr};
        string buf;
        while(getline(ss, buf, ' ')) {
            if(buf != "") {
                st.push(buf);
            }
        }

        string ans = "";
        int n = st.size();
        for(int i = 0; i < n; i++) {
            ans += st.top();
            if(i != n - 1) {
                ans += " ";
            }
            st.pop();
        }

        return ans;
    }
};
