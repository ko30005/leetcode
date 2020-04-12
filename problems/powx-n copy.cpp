#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double powCalc(double x, int n) {
        if(n == 0) {
            return x;
        }

        return powCalc(x, n - 1) * x;
    }
    double myPow(double x, int n) {
        // if() {
        //     powCalc();
        // }

        return powCalc(x, n);
    }
};
