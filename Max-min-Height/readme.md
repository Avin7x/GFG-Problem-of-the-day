# Max Min Height

**Problem Link**: [Max Min Height – GeeksforGeeks](https://www.geeksforgeeks.org/problems/max-min-height/1)  
**Date**: 2025-06-30  
**Difficulty**: Hard  
**Accuracy**: 62.86%  
**Submissions**: 26K+  
**Points**: 8

---

## Problem Statement

Given a garden with `n` flowers planted in a row, represented by an array `arr[]`, where `arr[i]` denotes the height of the *i-th* flower.

You are allowed to water the flowers for `k` days.  
In one day, you can water **`w` continuous flowers**.

Whenever you water a flower, its height **increases by 1 unit**.

Your task is to **maximize the minimum height** of all flowers after `k` days of watering.

---

## Example

### Input:
arr[] = [2, 3, 4, 5, 1]
k = 2
w = 2


### Output:
2


### Explanation:
- **Day 1**: Water the last two flowers → `[2, 3, 4, 6, 2]`
- **Day 2**: Water the last two flowers → `[2, 3, 4, 7, 3]`
- Minimum height = **2**

---

## Constraints

- `1 ≤ n ≤ 10^5`
- `1 ≤ arr[i] ≤ 10^9`
- `1 ≤ k ≤ 10^9`
- `1 ≤ w ≤ n`

---

## Tags

- Binary Search
- Greedy
- Sliding Window
- Optimization

---

## Notes

To solve this problem efficiently, binary search on the possible value of minimum height is a common approach, combined with a prefix sum strategy to track the watering effect efficiently.
