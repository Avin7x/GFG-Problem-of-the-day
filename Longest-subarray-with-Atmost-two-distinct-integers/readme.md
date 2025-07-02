# Longest Subarray with At Most Two Distinct Integers

**Difficulty:** Medium  
**Date:** July 2, 2025  
**Problem Link:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1) 

---

## Problem Statement

Given an array `arr[]` consisting of **positive integers**, your task is to **find the length of the longest subarray that contains at most two distinct integers**.

---

## Examples

### Example 1
**Input:**  
`arr[] = [2, 1, 2]`  
**Output:**  
`3`  
**Explanation:**  
The entire array `[2, 1, 2]` contains at most two distinct integers (2 and 1). Hence, the length of the longest subarray is `3`.

### Example 2
**Input:**  
`arr[] = [1, 2, 3, 2, 2]`  
**Output:**  
`4`  
**Explanation:**  
The longest subarray with at most two distinct integers is `[2, 3, 2, 2]`.

---

## Constraints

- `1 ≤ arr.length ≤ 10^5`
- `1 ≤ arr[i] ≤ 10^9`

---

## Approach

- Use the **sliding window technique** to maintain a window that contains at most two distinct integers.
- Use a hashmap or frequency map to track the count of elements in the current window.
- Expand the window to the right, and contract it from the left whenever more than two distinct integers are present.

---

## Tags

`Two Pointers`, `Sliding Window`, `Hashing`, `Arrays`
