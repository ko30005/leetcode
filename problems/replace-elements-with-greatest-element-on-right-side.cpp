#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> replaceElements(vector<int> &arr) {
        int len = arr.size();
        int curMax = arr[len - 1];
        arr[len - 1] = -1;
        for(int i = arr.size() - 2; i >= 0; --i) {
            int tmp = arr[i];
            arr[i] = curMax;
            curMax = max(curMax, tmp);
        }

        return arr;
    }
};
