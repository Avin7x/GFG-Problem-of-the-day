#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        
        unordered_map<int, int>freq;
        for(int num: arr) freq[num] ++;
        
        for(int num: arr){
            if(freq[num] == 0) continue;
            
            int count = freq[num];
            for(int i=0; i<k; i++){
                if(freq[num + i] < count)
                return false;
                
                else 
                   freq[num + i] -= count;
            }
        }
        
        return true;
    }
};