# Max Score from Subarray Mins

**Problem Link:** [Max Score from Subarray Mins - GeeksforGeeks](https://www.geeksforgeeks.org/problems/max-score-from-subarray-mins/1)  
**Date:** 5th July 2025  
**Difficulty:** Medium  
**Accuracy:** 43.26%  
**Points:** 4  

---

## Problem Statement

You are given an array `arr[]` of integers.  
Your task is to find the **maximum sum of the smallest and second smallest elements** across all subarrays (of size ≥ 2) of the given array.

---

## Key Insight

To maximize the sum of the smallest and second smallest elements in a subarray:

> ✅ Only subarrays of size **exactly 2** (adjacent pairs) should be considered.  
> Including more elements increases the chance of a smaller minimum, thereby reducing the sum.

Thus, the optimal solution is to:
- Iterate over all adjacent pairs in the array.
- Compute their sum.
- Track the maximum among them.

---

## Example

**Input:**  
arr[] = [4, 3, 5, 1]


**Adjacent Pairs and Their Sums:**  
- [4, 3] → 4 + 3 = 7  
- [3, 5] → 3 + 5 = 8  
- [5, 1] → 5 + 1 = 6  

**Output:**  
8


---

## Approach

1. Initialize a variable to keep track of the maximum sum.
2. Traverse the array from index `0` to `n - 2`.
3. For each index, calculate the sum of the current element and the next one.
4. Update the maximum if the current sum is greater.

---

### Topic Tags
Arrays StackData Structures
