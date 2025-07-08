# Next Element with Greater Frequency

**GeeksforGeeks Problem Link**: [Next element with greater frequency](https://www.geeksforgeeks.org/problems/next-element-with-greater-frequency/1)  
**Date**: July 8, 2025

---

### Difficulty: Medium  
**Accuracy**: 60.4%  
**Submissions**: 17K+  
**Points**: 4

---

## Problem Statement

Given an array `arr[]` of integers, for each element, find the **closest (distance-wise) element to its right** that has a **higher frequency** than the current element.

If no such element exists, return `-1` for that position.

---

## Example

### Input:
arr[] = [2, 1, 1, 3, 2, 1]


### Output:
[1, -1, -1, 2, 1, -1]



### Explanation:
- Frequencies:
  - 1 → 3 times
  - 2 → 2 times
  - 3 → 1 time
- For `arr[0] = 2`, the next element `1` has a higher frequency → `1`
- For `arr[1] = 1`, no element to the right has a higher frequency → `-1`
- For `arr[2] = 1`, same as above → `-1`
- For `arr[3] = 3`, the next element `2` has a higher frequency → `2`
- For `arr[4] = 2`, the next element `1` has a higher frequency → `1`
- For `arr[5] = 1`, no elements to the right → `-1`

---

## Approach

1. **Frequency Map**: First, calculate the frequency of each element using a hash map.
2. **Stack-Based Traversal (Right to Left)**:
   - Traverse the array from right to left.
   - Use a **monotonic stack** to keep track of elements with higher frequency.
   - For each element, pop elements from the stack whose frequency is **less than or equal** to the current element’s frequency.
   - If the stack is not empty, the top of the stack is the next element with higher frequency.
   - Push the current element onto the stack.
3. **Output**: Construct the result array using the above logic.

---

## Time and Space Complexity

- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(n)` (for frequency map and stack)

---

## Tags

- Stack
- Hashing
- Frequency Map
- Monotonic Stack
