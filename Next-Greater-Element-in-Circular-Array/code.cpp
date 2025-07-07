#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, -1);
        
        for(int i = 0; i < 2 * n; i++) {
            int index = i % n;
            
            while(!st.empty() && arr[st.top()] < arr[index]) {
                ans[st.top()] = arr[index];
                st.pop();
            }
            
            // Only push in the first pass
            if(i < n)
                st.push(index);
        }
        
        return ans;
    }
};
