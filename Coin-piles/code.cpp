#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int upperBound(vector<int>& arr, int low, int high, int target){
      while(low < high){
          int mid = (low + high) >> 1;
          if(arr[mid] <= target){
              low = mid+1;
          }
          else{
              high = mid;
          }
      }
      
      return high;
  }
    int minimumCoins(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        // calculate the prefixsum of each pile
        vector<int>pre(n, 0);
        pre[0] = arr[0];
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] + arr[i];
        }
        
        long long minCoins = LLONG_MAX;
        
        for(int i=0; i<n; i++){
            int target = arr[i] + k;
            
            // coins to remove from left
            int leftRemove = (i > 0)? pre[i-1] : 0;
            
            // find the first index where value > target
            int idx = upperBound(arr, i, n, target);
            
            //coins to remove from the right
            long long coinsToRemove = leftRemove;
            if(idx < n){
                coinsToRemove += pre[n-1] - pre[idx-1] - target*(n-idx);
            }
            
            minCoins = min(minCoins, coinsToRemove);
        }
        
        return minCoins;
    }
};
