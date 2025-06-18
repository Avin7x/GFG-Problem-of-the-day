#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> palinParts(string &s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        // Precompute DP table for palindromes
        for(int len = 1; len <= n; ++len) {
            for(int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                if(s[i] == s[j]) {
                    if(len <= 2) dp[i][j] = true;
                    else dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }

        vector<vector<string>> res;
        vector<string> path;
        solve(s, 0, path, res, dp);
        return res;
    }

    void solve(string& s, int index, vector<string>& path, 
               vector<vector<string>>& res, vector<vector<bool>>& dp) {
        if(index == s.size()) {
            res.push_back(path);
            return;
        }

        for(int i = index; i < s.size(); ++i) {
            if(dp[index][i]) {
                path.push_back(s.substr(index, i - index + 1));
                solve(s, i + 1, path, res, dp);
                path.pop_back();
            }
        }
    }
};
