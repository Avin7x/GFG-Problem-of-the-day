#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int, int> freq;

        // Step 1: Count frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        vector<int> res(n, -1);
        stack<int> st;  // stack stores indices

        // Step 2: Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Pop elements with frequency <= current's frequency
            while (!st.empty() && freq[arr[st.top()]] <= freq[arr[i]]) {
                st.pop();
            }

            // If stack is not empty, top is the next element with greater frequency
            if (!st.empty()) {
                res[i] = arr[st.top()];
            }

            // Push current index
            st.push(i);
        }

        return res;
    }
};

