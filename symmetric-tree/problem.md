# 🔁 Symmetric Tree Check - POTD
**Date:** 14 June 2025  
**Category:** Binary Tree  
**Difficulty:** Easy-Medium  

### 🧩 Problem Statement
Given the root of a binary tree, check whether it is a mirror of itself (symmetric around its center).

### 🔍 Example:
Input:
1
/
2 2
/ \ /
3 4 4 3

Output: True

kotlin
Copy
Edit

### 🧠 Approach
- Start from root.
- Compare the left and right subtrees.
- Recursively ensure:
  - Left subtree's left matches right subtree's right.
  - Left subtree's right matches right subtree's left.