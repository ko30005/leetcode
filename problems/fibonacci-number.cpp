#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    map<int, int> cache;
    int fib(int N) {
        if(cache.find(N) != cache.end()) {
            return cache[N];
        }

        if(N < 2) {
            return N;
        }

        return cache[N] = fib(N - 1) + fib(N - 2);
    }
};
