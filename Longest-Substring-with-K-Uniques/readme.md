# [Longest Substring with K Uniques](https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1)
**Difficulty:** Medium  
**Accuracy:** 34.65%  
**Submissions:** 204K+  
**Points:** 4  

## Problem Statement

You are given a string `s` consisting only of lowercase alphabets and an integer `k`. Your task is to find the **length of the longest substring** that contains **exactly k distinct characters**.

### Note:
- If no such substring exists, return `-1`.

## Examples

### Example 1:
**Input:**  
`s = "aabacbebebe"`  
`k = 3`  

**Output:**  
`7`  

**Explanation:**  
The longest substring with exactly 3 distinct characters is `"cbebebe"`, which includes the characters `'c'`, `'b'`, and `'e'`.

### Example 2:
**Input:**  
`s = "aaaa"`  
`k = 2`  

**Output:**  
`-1`  

**Explanation:**  
All characters are the same, so there's no substring with exactly 2 distinct characters.

## Constraints
- `1 ≤ |s| ≤ 10^5`
- `1 ≤ k ≤ 26`

## Approach

To solve this problem efficiently, a **sliding window** technique can be used:
- Maintain a window with exactly `k` distinct characters.
- Expand the window by moving the right pointer.
- Shrink the window from the left if the count of distinct characters exceeds `k`.
- Keep track of the maximum length encountered when the window has exactly `k` unique characters.

This ensures an optimal solution with **O(n)** time complexity.
