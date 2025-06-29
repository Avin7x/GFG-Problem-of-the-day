#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  bool isPossible(vector<int>& nums, int maxSumAllowed, int maxSubarrays){
      int subarrayCount = 1, currentSum = 0;
      for(int i = 0; i < nums.size(); i++){
         if(currentSum + nums[i] <= maxSumAllowed)
             currentSum += nums[i];
         else {
             currentSum = nums[i];
             subarrayCount++;
         }   
      }
      return subarrayCount <= maxSubarrays;
  }

  int splitArray(vector<int>& nums, int k) {
      int low = *max_element(nums.begin(), nums.end());
      int high = accumulate(nums.begin(), nums.end(), 0);
      
      while(low <= high){
          int mid = (low + high) >> 1;
          if(isPossible(nums, mid, k)){
              high = mid - 1;
          }
          else {
              low = mid + 1;
          }
      }
      
      return low;
  }    
};
