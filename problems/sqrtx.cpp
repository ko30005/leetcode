#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int mySqrt(int x) {
        if(x < 2)
            return x;

        long long num;
        int pivot, left = 2, right = x / 2;

        while(left <= right) {
            pivot = left + (right - left) / 2;
            num = (long long)pivot * pivot;

            if(num < x) {
                left = pivot + 1;
            } else if(num > x) {
                right = pivot - 1;
            } else {
                return pivot;
            }
        }

        return right;
    }
};
