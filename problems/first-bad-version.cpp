#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int version);

class Solution {
  public:
    int firstBadVersion(int n) {
        int mid = 0, start = 0, high = n;
        while(start < high) {
            mid = start + (high - start) / 2;
            if(isBadVersion(mid)) {
                high = mid;
            } else {
                start = mid + 1;
            }
        }
        return mid;
    }
};
