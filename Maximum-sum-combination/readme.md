# Maximum Sum Combination

**Problem Link:** [GeeksforGeeks - Maximum Sum Combination](https://www.geeksforgeeks.org/problems/maximum-sum-combination/1)  
**Date:** July 6, 2025  
**Difficulty:** Medium  
**Accuracy:** 49.69%  
**Submissions:** 89K+  
**Points:** 4  
**Average Time:** 30 minutes

---

## Problem Statement

You are given two integer arrays `a[]` and `b[]` of equal size. A **sum combination** is formed by adding one element from `a[]` and one from `b[]`, using each index pair (i, j) at most once. Your task is to return the **top `k` maximum sum combinations**, sorted in **non-increasing order**.

---

### Example

**Input:**
a[] = [3, 2]
b[] = [1, 4]
k = 2


**Output:**
[7, 6]


**Explanation:**

All possible sums are:
- 3 + 1 = 4  
- 3 + 4 = 7  
- 2 + 1 = 3  
- 2 + 4 = 6  

The top 2 maximum sums are: **7** and **6**.

---

## Approach

To solve this problem efficiently:

1. **Sort both arrays** `a[]` and `b[]` in descending order.
2. Use a **max heap (priority queue)** to keep track of potential maximum sums.
3. Start with the pair `(0, 0)` → `a[0] + b[0]` as it gives the highest possible sum.
4. Use a **set** to store visited index pairs to avoid duplicate work.
5. At each step:
   - Pop the maximum element from the heap.
   - Add the next two possible pairs `(i+1, j)` and `(i, j+1)` if not visited.
6. Repeat until `k` sums are collected.

---

## Time and Space Complexity

- **Time Complexity:** `O(k * log k)` — due to heap operations.
- **Space Complexity:** `O(k)` — for heap and set.

---

## Tags

- Heap / Priority Queue
- Sorting
- Greedy
- Arrays
