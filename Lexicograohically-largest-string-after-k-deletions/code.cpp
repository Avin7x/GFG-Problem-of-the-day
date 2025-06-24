#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string maxSubseq(string& s, int k) {
        // code here
        stack<char>st;
        for(char c: s){                             
            while((!st.empty() && st.top() < c)&&k){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k > 0){
            st.pop();
            k--;
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};