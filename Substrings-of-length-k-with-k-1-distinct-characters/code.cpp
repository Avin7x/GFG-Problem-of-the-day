#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        int n=s.size();
        vector<int>freq(26, 0);
        int i=0, j=0;
        int count=0, uniqueCount = 0;
        while(j < n){
            if(freq[s[j] - 'a'] == 0) uniqueCount++;
            freq[s[j] - 'a']++;
        
            while(j-i+1 > k && i<=j){
                freq[s[i] - 'a']--;
                if(freq[s[i] - 'a'] == 0)uniqueCount--;
                i++;
                
            }
            
            if(j - i +1 == k && uniqueCount == k-1) count++;
            j++;
        }
        
        return count;
    }
};