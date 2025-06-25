#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
        //store all the frequencies of each character in a frequence map
        vector<int>freq(26, 0);
        for(char c: s){
            freq[c-'a']++;
        }
        
        int f1 = 0, c1=0, f2=0, c2 = 0;
        for(int i=0; i<26; i++){
            if(freq[i] == 0) continue;
            else if(f1 == 0 && freq[i] != f2) {
                f1 = freq[i];
                c1 = 1;
            }
            else if(f2 == 0 && freq[i] != f1){
                f2 = freq[i];
                c2 = 1;
            }
            else if(freq[i] == f1) c1++;
            else if(freq[i] == f2) c2++;
            else return false; // more than 2 unique frequency exist
                    
        }
            
        if(f2 == 0) return true; // only 1 unique frequency exist
            
        if((abs(f1 - f2) == 1) && ((f1 > f2 && c1 == 1 )|| (f2 > f1 && c2 == 1))) return true;
        else if((f1 == 1 && c1 == 1) || (f2 == 1 && c2 == 1)) return true;
        else return false;
            
        
    }
};