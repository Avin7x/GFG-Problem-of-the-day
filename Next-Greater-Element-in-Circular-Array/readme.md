# [Next Greater Element in Circular Array](https://www.geeksforgeeks.org/problems/next-greater-element-in-circular-array/1)

**Date:** July 7, 2025  
**Difficulty:** Medium  
**Accuracy:** 56.97%  
**Submissions:** 46K+  
**Points:** 4  

---

## Problem Statement

Given a **circular integer array** `arr[]`, the task is to determine the **next greater element (NGE)** for each element in the array.

The **next greater element** of an element `arr[i]` is the **first element** that is greater than `arr[i]` when traversing **circularly**. If no such element exists, return `-1` for that position.

### Circular Property:

Since the array is **circular**, after reaching the last element, the search continues from the **beginning** until we have looked at **all elements once**.

---

## Example

### Input:
arr[] = [1, 3, 2, 4]


### Output:
[3, 4, 4, -1]


### Explanation:
- The next greater element for `1` is `3`.
- The next greater element for `3` is `4`.
- The next greater element for `2` is `4`.
- The next greater element for `4` does not exist, so return `-1`.

---

## Approach

- To handle the **circular nature** of the array, simulate two passes through the array (i.e., loop from `2n - 1` to `0`).
- Use a **monotonic stack** to keep track of potential next greater elements.
- Iterate in **reverse** so that we can efficiently update the next greater element using stack top.
- For index `i`, we consider `arr[i % n]` to wrap around the array.

### Time Complexity:
- **O(n)** where `n` is the size of the array.

---

## Tags
`Stack` `Monotonic Stack` `Arrays` `Next Greater Element` `Circular Array`

---
