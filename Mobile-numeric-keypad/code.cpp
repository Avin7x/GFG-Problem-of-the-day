#include<bits/stdc++.h>
using namespace std;



class Solution {
  public:
  int solve(int i, int j, int n, vector<vector<int>>& mat, vector<vector<vector<int>>>& dp){
      if(i < 0 || i > 3 || j < 0 || j > 2 || mat[i][j] == -1) return 0;
      if(n == 0) return 1;
      if(dp[i][j][n] != -1) return dp[i][j][n];
      return dp[i][j][n] = solve(i, j, n-1, mat, dp) +
            solve(i, j-1, n-1, mat, dp) +
            solve(i, j+1, n-1, mat, dp) +
            solve(i-1, j, n-1, mat, dp) +
            solve(i+1, j, n-1, mat, dp);
  }
    int getCount(int n) {
        // code here
        vector<vector<int>>mat={
            {1, 1, 1},
            {1, 1, 1},
            {1, 1, 1},
            {-1, 1, -1}
        };
        
        vector<vector<vector<int>>>dp(4, vector<vector<int>>(3, vector<int>(n+1, -1)));
        int ans = 0;
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                if(mat[i][j] == -1) continue;
                ans += solve(i, j, n-1,  mat, dp);
            }
        }
        
        return ans;
    }
};