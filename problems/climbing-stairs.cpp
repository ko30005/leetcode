#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    map<int, int> cache;
    int calcStairs(int i, int n) {
        if(cache.find(i) != cache.end()) {
            return cache[i];
        }

        if(i > n) {
            return 0;
        }

        if(i == n) {
            return 1;
        }

        return cache[i] = calcStairs(i + 1, n) + calcStairs(i + 2, n);
    }

    int climbStairs(int n) { return calcStairs(0, n); }
};
