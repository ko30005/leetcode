#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int version);

class Solution {
  public:
    int firstBadVersion(int n) {
        int mid, left = 0, right = n;

        while(left < right) {
            mid = left + (right - left) / 2;
            if(isBadVersion(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        if(isBadVersion(left)) {
            return left;
        }

        return right;
    }
};
