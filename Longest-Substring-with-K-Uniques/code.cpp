#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        vector<int>freq(26, 0);
        int i=0, maxLen=0, count=0;
        for(int j=0; j<s.size(); j++){
            if(freq[s[j] - 'a'] == 0) count++;
            freq[s[j] - 'a']++;
            
            while(count > k && i<=j){
                freq[s[i]-'a']--;
                if(freq[s[i] - 'a'] == 0) count--;
                i++;
            }
            
            if(count == k){
                maxLen = max(maxLen, j-i+1);
            }
        }
        
        return (maxLen == 0)? -1: maxLen;
    }
};