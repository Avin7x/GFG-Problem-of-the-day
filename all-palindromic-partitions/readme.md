# 🧩 POTD - Find All Possible Palindromic Partitions (18 June 2025)

**Problem Link**: [Find All Possible Palindromic Partitions](https://www.geeksforgeeks.org/problems/find-all-possible-palindromic-partitions-of-a-string/1)

## 📝 Problem Statement

Given a string `s`, partition `s` such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of `s`.

### Example:
**Input**:  
`s = "geeks"`

**Output**:  
[
["g", "e", "e", "k", "s"],
["g", "ee", "k", "s"]
]


---

## 🚀 Approach

The problem is solved using **backtracking** combined with **Dynamic Programming (DP)** for efficient palindrome checks.

### ✅ Optimization

- A DP table `dp[i][j]` is used to store whether the substring `s[i...j]` is a palindrome.
- This reduces the time complexity of each palindrome check from `O(n)` to `O(1)`.

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n * 2^n)` in worst case due to generating all partitions, with DP reducing repeated palindrome checks.
- **Space Complexity**: `O(n^2)` for DP table and recursion stack.

---

## 🧠 Concepts Used

- Backtracking
- Dynamic Programming
- Palindrome Partitioning
- Substring Preprocessing

---

## 📅 Date

**18 June 2025** – GeeksForGeeks POTD

---

## 📌 Tags

`Backtracking`, `Dynamic Programming`, `Recursion`, `Strings`

