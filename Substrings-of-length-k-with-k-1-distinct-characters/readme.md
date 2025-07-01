# Substrings of Length K with K-1 Distinct Elements

**Problem Link:** [GFG - Substrings of length k with k-1 distinct elements](https://www.geeksforgeeks.org/problems/substrings-of-length-k-with-k-1-distinct-elements/1)  
**Date:** July 1, 2025  
**Difficulty:** Medium  
**Accuracy:** 57.85%  
**Points:** 4  
**Average Time:** 15m  

---

## Problem Statement

Given a string `s` consisting only of lowercase alphabets and an integer `k`, find the count of all substrings of length `k` which have **exactly `k-1` distinct characters**.

---

## Example

### Input
s = "abcc"
k = 2


### Output

### Explanation
Possible substrings of length `k = 2`:
- "ab" → 2 distinct characters ❌  
- "bc" → 2 distinct characters ❌  
- "cc" → 1 distinct character ✅  

Only one valid substring (`"cc"`) has exactly `k - 1 = 1` distinct characters. Hence, the answer is `1`.

---

## Constraints
- `1 <= s.length <= 10^5`
- `1 <= k <= s.length`

---

## Tags
`Sliding Window` `Hashing` `String` `Two Pointer`
