#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Helper to add two numeric strings
    string addStrings(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            carry = sum / 10;
            result += (sum % 10) + '0';
        }

        reverse(result.begin(), result.end());
        return result;
    }

    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());  // Step 1: sort digits

        string num1 = "", num2 = "";

        // Step 2: Distribute digits to balance numbers
        for (int digit : arr) {
            if (num1.size() <= num2.size())
                num1 += to_string(digit);
            else
                num2 += to_string(digit);
        }

        // Step 3: Add num1 and num2 (as strings) and return
        string sum = addStrings(num1, num2);

        // Remove leading zeroes, if any
        int pos = sum.find_first_not_of('0');
        if (pos != string::npos)
            return sum.substr(pos);
        return "0";  // if all zeros
    }
};
