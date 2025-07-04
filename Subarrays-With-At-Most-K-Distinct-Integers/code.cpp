#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int>freq;
        int i=0, count = 0;
        for(int j=0; j<arr.size(); j++){
            // insert the current element to frequency map
            freq[arr[j]]++;
            
            // shrink the window if distinct integers count is > k
            while(freq.size() > k && i<=j){
                freq[arr[i]]--;
                if(freq[arr[i]] == 0) freq.erase(arr[i]);
                i++;
            }
            
            // count all the subarrays ending till j
            count += (j-i + 1);
               
        }
        
        return count;
    }
};