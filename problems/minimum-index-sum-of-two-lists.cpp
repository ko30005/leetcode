#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<string> findRestaurant(vector<string> &list1,
                                  vector<string> &list2) {

        unordered_map<string, int> map1;
        unordered_map<string, int> map2;
        for(int i = 0; i != list1.size(); i++) {
            map1[list1[i]] = i;
        }

        for(int i = 0; i != list2.size(); i++) {
            if(map1.find(list2[i]) != map1.end()) {
                map2[list2[i]] += i + map1[list2[i]];
            }
        }

        vector<string> ans;
        int minI = INT_MAX;
        for(auto it = map2.begin(); it != map2.end(); it++) {
            int tmp = min(minI, it->second);
            if(minI > it->second) {
                ans.clear();
                ans.push_back(it->first);
            } else if(minI == it->second) {
                ans.push_back(it->first);
            }
            minI = tmp;
        };

        return ans;
    };
};
