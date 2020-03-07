#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string licenseKeyFormatting(string S, int K) {
        std::string::size_type pos = 0;
        while(pos = S.find('-', pos), pos != std::string::npos) {
            S.replace(pos, 1, "");
        }

        int len = S.length();

        for(int i = K; i < len; i = i + K) {
            S.insert(len - i, "-");
        }
        transform(S.begin(), S.end(), S.begin(), ::toupper);
        return S;
    }
};
