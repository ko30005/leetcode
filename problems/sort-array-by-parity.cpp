#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> sortArrayByParity(vector<int> &A) {
        int oddi = 0;
        for(int i = 0; i < A.size(); i++) {
            if(A[i] % 2 == 0) {
                int tmp = A[oddi];
                A[oddi] = A[i];
                A[i] = tmp;
                oddi++;
            }
        }

        return A;
    }
};
