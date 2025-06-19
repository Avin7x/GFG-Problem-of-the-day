#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string caseSort(string& s) {
        string upper, lower;

        for (char c : s) {
            if (isupper(c)) upper.push_back(c);
            else            lower.push_back(c);
        }

        sort(upper.begin(), upper.end());
        sort(lower.begin(), lower.end());

        int i = 0, j = 0;
        string ans;
        for (char c : s) {
            if (isupper(c)) ans.push_back(upper[i++]);
            else            ans.push_back(lower[j++]);
        }

        return ans;
    }
};
