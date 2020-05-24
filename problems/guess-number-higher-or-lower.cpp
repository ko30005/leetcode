#include <bits/stdc++.h>
using namespace std;

int guess(int num);

class Solution {
  public:
    int guessNumber(int n) {
        int low = 0, high = n;
        while(low < high) {
            int mid = low + (high - low) / 2;
            int guessVal = guess(mid);
            if(guessVal == 0) {
                return mid;
            } else if(guessVal == -1) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
