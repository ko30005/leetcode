#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(int i = 0; i < s.length(); i++) {
            if(std::isalpha(static_cast<unsigned char>(s[i])) ||
               std::isdigit(static_cast<unsigned char>(s[i]))) {
                newStr += tolower(s[i]);
            }
        }
        int i = 0;
        int j = newStr.length() - 1;

        while(i <= j) {
            if(newStr[i] != newStr[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
