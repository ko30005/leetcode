#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string pushToStack(string str) {
        stack<char> st;
        for(char c : str) {
            if(c == '#') {
                if(!st.empty()) {
                    st.pop();
                }
                continue;
            }
            st.push(c);
        }
        string newStr = "";
        while(!st.empty()) {
            newStr += st.top();
            st.pop();
        }
        return newStr;
    }

    bool backspaceCompare(string S, string T) {
        return pushToStack(S) == pushToStack(T);
    }
};
