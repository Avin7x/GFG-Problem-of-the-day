# [Count Subarrays with at Most K Distinct Integers](https://www.geeksforgeeks.org/problems/subarrays-with-at-most-k-distinct-elements/1)

**Difficulty:** Medium  
**Accuracy:** 54.80%  
**Submissions:** 85K+  
**Points:** 4
**Date:** 4 july 2025
---

## Problem Statement

You are given an array `arr[]` consisting of **positive integers** and an integer `k`. Your task is to find the **number of subarrays** in `arr[]` where the count of **distinct integers** is **at most `k`**.

---

## Example

### Input:
arr = [1, 2, 1, 2, 3], k = 2


### Output:
10


### Explanation:
The valid subarrays with at most 2 distinct elements are:
- [1]
- [2]
- [1]
- [2]
- [3]
- [1, 2]
- [2, 1]
- [1, 2]
- [2, 3]
- [1, 2, 1]

Total = **10 subarrays**

---

## Constraints:
- 1 ≤ |arr| ≤ 10⁵  
- 1 ≤ arr[i] ≤ 10⁵  
- 1 ≤ k ≤ |arr|

---

## Approach

To solve this efficiently, we use the **sliding window** technique along with a **hash map** to keep track of the frequency of elements.

### Key Insight:

Every time we expand the right boundary of the window (`j`), we count how many subarrays ending at index `j` are valid:
- All subarrays from `arr[i]` to `arr[j]` (i.e., `(j - i + 1)` subarrays) are valid as long as the number of distinct integers in the current window is ≤ `k`.

### Pseudocode:

1. Initialize:
   - Two pointers `i = 0` and `j = 0`.
   - Hash map `freq` to track frequencies of elements.
   - Variable `count = 0` to store result.

2. Iterate `j` over the array:
   - Add `arr[j]` to the frequency map.
   - If number of distinct elements > `k`, shrink window from the left (`i`).
   - At each step, add `(j - i + 1)` to `count`.

---

### Topic-tags:
### sliding-window ### Arrays ### Data Structures Algorithms