#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numUniqueEmails(vector<string> &emails) {
        unordered_set<string> ans;
        for(string &email : emails) {
            string cleanEmail;
            for(char c : email) {
                if(c == '+' || c == '@')
                    break;
                if(c == '.')
                    continue;
                cleanEmail += c;
            }
            cleanEmail += email.substr(email.find('@'));
            ans.insert(cleanEmail);
        }
        return ans.size();
    }
};
