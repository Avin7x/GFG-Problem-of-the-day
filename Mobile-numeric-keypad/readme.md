# 🔢 Mobile Numeric Keypad Problem

**Date:** 27 June 2025  
**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/mobile-numeric-keypad5456/1)  
**Difficulty:** Medium

---

## 🧩 Problem Statement

Given a mobile numeric keypad as shown below:

1 2 3
4 5 6
7 8 9
* 0 #


You can only press buttons which are **not `*` or `#`** (i.e., not at positions `(3,0)` and `(3,2)`). You can move to any of the four directions (up, down, left, right), and pressing the same button consecutively is allowed.

Given a number `N`, your task is to count how many possible numbers of length `N` can be formed using the movement rules mentioned above.

---

## 🧠 Approach

- Use a recursive function with memoization (top-down DP).
- Use a 3D DP array `dp[i][j][n]` to store the result for starting at `(i, j)` with `n` digits remaining.
- Transition includes 5 directions:
  - stay in place
  - move up, down, left, right
- Avoid invalid cells (i.e., `*`, `#`, or out-of-bounds).

---

## ✅ Constraints

- `1 <= N <= 50`

---

## 🧪 Example

### Input:
N = 2

### Output:
36

📚 Tags
DP Recursion Memoization Mobile Keypad Combinatorics

