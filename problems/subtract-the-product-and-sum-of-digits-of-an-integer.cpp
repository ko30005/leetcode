#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int subtractProductAndSum(int n) {
        string str = to_string(n);

        if(str.length() <= 1) {
            return 0;
        }

        int supBase = 10;
        int pro = n % supBase;
        int sum = n % supBase;

        for(int i = 1; i < str.length(); i++) {
            supBase = supBase * 10;
            pro = pro * (n % supBase / (supBase / 10));
            sum = sum + (n % supBase / (supBase / 10));
        }

        return pro - sum;
    }
};
