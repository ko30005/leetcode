#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_map<int, bool> map;
        for(int i = 0; i != nums1.size(); i++) {
            map[nums1[i]] = true;
        }

        vector<int> ans;
        for(int i = 0; i != nums2.size(); i++) {
            if(map[nums2[i]]) {
                ans.push_back(nums2[i]);
                map[nums2[i]] = false;
            }
        }

        return ans;
    }
};
