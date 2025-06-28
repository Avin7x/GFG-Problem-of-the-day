#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>sortedB(1e5 + 1, 0);
        vector<int>prefixSum(1e5 + 1, 0);
        vector<int>ans(a.size());
        for(int num: b){
            sortedB[num]++;
        }
        
        prefixSum[0] = sortedB[0];
        for(int i=1; i<=1e5; i++){
            prefixSum[i] = prefixSum[i-1] + sortedB[i];  
        }
        
        for(int i=0; i<a.size(); i++){
            ans[i] = prefixSum[a[i]];
        }
        
        return ans;
    }
};