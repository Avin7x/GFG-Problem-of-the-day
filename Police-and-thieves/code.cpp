#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n = arr.size();
        int p=0, t=0, count=0;
        
        while(p < n && arr[p] != 'P') p++;
        while(t < n && arr[t] != 'T') t++;
        
        while(p<n && t<n){
            
            if(abs(p - t) <= k){
                count++;
                p++, t++;
            }
            else if(p < t) p++;
            else if (t < p) t++;
    
        
            while(p < n && arr[p] != 'P') p++;
            while(t < n && arr[t] != 'T') t++;
            
        }
        
        return count;
    }
};