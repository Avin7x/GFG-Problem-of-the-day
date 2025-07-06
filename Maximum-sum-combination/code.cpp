#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size();
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
       //sum, i, j 
        priority_queue<pair<int, pair<int, int>>>pq;
        set<pair<int, int>>vis;//keeps track of the used pairs
        pq.push({a[0] + b[0], {0, 0}});
        vis.insert({0, 0});
        vector<int>ans;
        
        while(ans.size() < k){
            auto top = pq.top();
            pq.pop();
            
            ans.push_back(top.first);
            int i = top.second.first;
            int j = top.second.second;
            
            if(i+1 < n && vis.find({i+1, j}) == vis.end() ){
                pq.push({a[i+1] + b[j], {i+1, j}});
                vis.insert({i+1, j});
            }
            
            if(j+1 < n && vis.find({i, j+1}) == vis.end() ){
                pq.push({a[i] + b[j+1], {i, j+1}});
                vis.insert({i, j+1});
            }
        }
        
        return ans;
    }
};