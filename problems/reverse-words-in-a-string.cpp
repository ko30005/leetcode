#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverseWords(string s) {
        if(s.length() == 0) {
            return s;
        }
        stack<string> st;
        std::stringstream ss{s};
        std::string buf;
        while(std::getline(ss, buf, ' ')) {
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
