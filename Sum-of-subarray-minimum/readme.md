# [Sum of Subarray Minimums – GFG (09 July 2025)](https://www.geeksforgeeks.org/problems/sum-of-subarray-minimum/1)

**Difficulty:** Medium  
**Accuracy:** 46.92%  
**Submissions:** 22K+  
**Points:** 4  
**Average Time:** 30m  

---

## 🧮 Problem Statement

Given an array `arr[]` of positive integers, find the total **sum of the minimum elements of every possible subarray**.

### 🔒 Constraints
- The total sum is guaranteed to fit within a 32-bit unsigned integer.

---

## 🔍 Examples

### Example 1:
**Input:**  
`arr[] = [3, 1, 2, 4]`  
**Output:**  
`17`  
**Explanation:**  
All subarrays and their minimums:
- [3] → 3  
- [1] → 1  
- [2] → 2  
- [4] → 4  
- [3, 1] → 1  
- [1, 2] → 1  
- [2, 4] → 2  
- [3, 1, 2] → 1  
- [1, 2, 4] → 1  
- [3, 1, 2, 4] → 1  

**Total Sum = 3 + 1 + 2 + 4 + 1 + 1 + 2 + 1 + 1 + 1 = 17**

---

## 💡 Approach

To compute the sum efficiently, a brute-force solution that iterates over all subarrays would be too slow (O(N³) or O(N²)).

Instead, we can use a **monotonic stack** to efficiently determine for each element:
- How many subarrays it is the **minimum** of.

### 🔧 Key Insight:

For each element `arr[i]`, determine:
- `left[i]`: number of subarrays ending at or before `i` where `arr[i]` is the minimum.
- `right[i]`: number of subarrays starting at or after `i` where `arr[i]` is the minimum.

Then:
Total Sum = ∑ arr[i] * left[i] * right[i]


---

## 🧠 Time Complexity

- **Time:** O(N)
- **Space:** O(N)

---

## ✅ Tags
`Stack` `Monotonic Stack` `Arrays` `Prefix` `Subarrays`

---
