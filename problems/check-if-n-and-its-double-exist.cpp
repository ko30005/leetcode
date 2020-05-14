#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkIfExist(vector<int> &arr) {
        map<int, bool> map;
        int zeroCount = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                zeroCount++;
                continue;
            }
            map[arr[i]] = true;
        }

        if(zeroCount >= 2) {
            return true;
        }

        for(int i = 0; i < arr.size(); i++) {
            if(map[arr[i] * 2]) {
                return true;
            }
        }

        return false;
    }
};
