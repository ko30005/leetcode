#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {

        int rit = digits.size() - 1;
        bool finished = false;
        while(!finished) {
            if(rit == 0)
                finished = true;

            if(digits[rit] == 9) {
                digits[rit] = 0;
            } else {
                digits[rit]++;
                return digits;
            }
            rit--;
        }

        if(digits[0] == 0) {
            auto it = digits.begin();
            digits.insert(it, 1);
        }

        return digits;
    }
};
