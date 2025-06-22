# 🔗 Longest Divisible Subset

**📅 Date**: 22 June 2025  
**🔗 Problem Link**: [Longest Divisible Subset – GeeksforGeeks](https://www.geeksforgeeks.org/problems/largest-divisible-subset--170643/1)

---

## 📝 Problem Statement

You are given an array `arr[]` of `n` positive integers. Your task is to find the **largest subset** such that for every pair `(i, j)` in the subset:

Either arr[i] % arr[j] == 0 or arr[j] % arr[i] == 0


Return the size of this largest divisible subset.

---

## 🧪 Example

**Input**:
arr = [1, 2, 4, 8]


**Output**:

4


**Explanation**:  
The subset `[1, 2, 4, 8]` satisfies the divisibility condition:  
- 2 % 1 == 0  
- 4 % 2 == 0  
- 8 % 4 == 0  

---

## 🚀 Optimal Approach (Dynamic Programming)

### ✅ Strategy:
1. **Sort** the array to ensure that if `arr[i] % arr[j] == 0`, then `arr[i] >= arr[j]`.
2. Use a **DP array** where `dp[i]` stores the length of the largest divisible subset ending at index `i`.
3. For every `i`, check all `j < i`. If `arr[i] % arr[j] == 0`, update `dp[i] = max(dp[i], dp[j] + 1)`.
4. Return the maximum value from the `dp[]` array.

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n^2)`  
  Nested iteration to compare each pair for divisibility.

- **Space Complexity**: `O(n)`  
  For the DP array to store subset lengths.

---

## 📌 Tags

`Dynamic Programming`, `Sorting`, `Greedy`, `Math`, `Subsets`, `LIS Variant`

