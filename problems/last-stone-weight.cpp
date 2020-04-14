#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lastStoneWeight(vector<int> &stones) {
        if(stones.size() == 0) {
            return 0;
        }
        if(stones.size() == 1) {
            return stones[0];
        }

        priority_queue<int, std::vector<int>> pq;
        for(int i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }

        while(pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            if(first != second) {
                pq.push(first - second);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};
