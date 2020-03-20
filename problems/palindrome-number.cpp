#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(int x) {
        string str = std::to_string(x);
        string newStr = "";
        for(int i = str.size() - 1; i >= 0; i--) {
            newStr += str[i];
        }
        return newStr == str;
    }
};
