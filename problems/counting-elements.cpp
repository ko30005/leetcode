#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countElements(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        unordered_map<int, bool> map;
        for(int i = 0; i < arr.size(); i++) {
            map[arr[i]] = true;
        }

        int ans = 0;
        for(int i = 0; i < arr.size() - 1; i++) {
            if(!map[arr[i] + 1]) {
                continue;
            }

            if(arr[i] + 1 == arr[i + 1] || arr[i] == arr[i + 1]) {
                ans++;
            }
        }

        return ans;
    }
};
