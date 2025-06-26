#include<bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        vector<int>freq(26, 0);
        for(char c : s) freq[c - 'a']++;
        priority_queue<int>pq;
        for(int f: freq){
            if(f == 0) continue;
            pq.push(f);
        }
        
        int sum = 0;
        while(!pq.empty() && k > 0){
            
                int f = pq.top();
                pq.pop();
                f--, k--;
                if(f > 0)
                pq.push(f);
                
            
            
        }
        
        while(!pq.empty()){
            int f = pq.top();
            pq.pop();
            sum += f*f;
        }
        
        return sum;
    }
};