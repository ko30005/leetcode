#include <bits/stdc++.h>
using namespace std;

struct Compare {
    bool operator()(vector<int> const &a, vector<int> const &b) {
        return (a[0] + a[1] > b[0] + b[1]);
    }
};

class Solution {
  public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2,
                                       int k) {
        vector<vector<int>> res;

        priority_queue<vector<int>, vector<vector<int>>, Compare> pq;

        for(int i = 0; i < nums1.size(); ++i) {
            for(int j = 0; j < nums2.size(); ++j) {
                vector<int> tmp{nums1[i], nums2[j]};
                pq.push(tmp);
            }
        }

        k = k < pq.size() ? k : pq.size();
        for(int i = 0; i < k; ++i) {
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};
