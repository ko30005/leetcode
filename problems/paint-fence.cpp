#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numWays(int n, int k) {
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return k;
        }
        if(n == 2) {
            return k * k;
        }

        int sameColorCounts = k, diffColorCounts = k * (k - 1);
        for(int p = 3; p <= n; ++p) {
            int temp = diffColorCounts;
            diffColorCounts = (diffColorCounts + sameColorCounts) * (k - 1);
            sameColorCounts = temp;
        }

        return sameColorCounts + diffColorCounts;
    }
};
