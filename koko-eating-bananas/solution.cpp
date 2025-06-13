#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
//   helper function 
  bool check(vector<int>& arr, int k, int s){
    int hours = 0;
    for(int pile: arr){
        hours += (pile + s-1) / s;
        if(hours > k) return false;
    }

    return true;
  }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        // using binary search
        // the range of the binary search will be from 1 to max(arr)
        // cuz the minium banana koko can eat per hour is 1 and maximum it can 
        // eat is the max element in arr

        int maxi = INT_MIN;
        for(int num : arr){
            maxi = max(num, maxi);
        }

        int low = 1, high = maxi;
        int ans = high;
        while(low <= high){
            int mid = (low + high)/2;
            // if she completes all the piles within k hours eating mid amount of banana
            // per hour then, look for a smaller mid else for a higher one
            if(check(arr, k, mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }
};

// driver code
int main(){
    // sample test case
    vector<int>arr = {5, 10, 15, 20};
    int k = 7;
    int expectedAns = 10;
    Solution obj;
    if(obj.kokoEat(arr, k) == expectedAns){
        cout<<"Correct";
    }
    else{
        cout<<"Wrong!";
    }


    return 0;
}