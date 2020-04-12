#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isHappyc(int n) {
        int total = 0;
        while(n > 0) {
            int x = n % 10;
            n /= 10;
            total += x * x;
        }

        return total;
    }

    bool isHappy(int n) {
        unordered_map<int, bool> map;

        while(n != 1 && !map[n]) {
            map[n] = n;
            n = isHappyc(n);
        }

        return n == 1;
    }
};
