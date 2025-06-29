# Split Array Largest Sum

**Difficulty:** Hard  
**Accuracy:** 58.9%  
**Submissions:** 57K+  
**Points:** 8  
**Date:** 2025-06-29  
**Platform:** GeeksforGeeks

---

## 🧩 Problem Statement

Given an array `arr[]` and an integer `k`, divide the array into `k` **contiguous subarrays** such that the **maximum sum** among these subarrays is **minimized**.  
Your task is to find this **minimum possible maximum sum**.

---

## 🧪 Examples

### Example 1:
**Input:**
arr[] = [1, 2, 3, 4]
k = 3


**Output:**

**Explanation:**  
The optimal split is:  
- [1, 2]  
- [3]  
- [4]  
The sums of these subarrays are 3, 3, and 4 respectively.  
The maximum among them is **4**, which is the smallest possible for 3 splits.

---

## 🔍 Constraints
- 1 ≤ `arr.length` ≤ 10⁵  
- 0 ≤ `arr[i]` ≤ 10⁴  
- 1 ≤ `k` ≤ `arr.length`

---

## 💡 Approach

This is a classic **binary search on answer** problem. The goal is to minimize the **maximum sum** of subarrays when splitting the array into `k` parts.  

### Key Steps:
1. **Binary Search Range:**  
   - Low = max element of `arr` (minimum possible max sum)  
   - High = sum of all elements in `arr` (maximum possible max sum)

2. **Feasibility Check:**  
   Use a greedy approach to check if it's possible to split the array into ≤ `k` subarrays with max sum ≤ `mid`.

3. Adjust your binary search window accordingly.

---

## 🛠️ Tags

- Binary Search  
- Greedy  
- Divide and Conquer  
- Dynamic Programming (variation)

---

## 🌐 Problem Link

[Split Array Largest Sum - GFG](https://www.geeksforgeeks.org/problems/split-array-largest-sum/1)

