#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>nsl(n), nsr(n);
        stack<int>st;
        //compute the next smallest left
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            nsl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        //clear the stack 
        while(!st.empty()) st.pop();
        
        //compute the next smallest right
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            nsr[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        
        //compute the sum
        int sum=0;
        for(int i=0; i<n; i++){
            int left = i - nsl[i];
            int right = nsr[i] - i;
            int totalS = (left*right);
            sum += totalS*arr[i];
        }
        return sum;
    }
};