# Find the Longest String

**GFG Problem Link:** [Find the Longest String](https://www.geeksforgeeks.org/problems/find-the-longest-string2259/1)  
**Date:** 10 July 2025

---

### 🧩 Problem Statement

Given an array of strings `words[]`, find the **longest string** in `words[]` such that **every prefix** of it is also present in the array `words[]`.

📌 **Note**:  
If multiple strings have the same maximum length, return the **lexicographically smallest** one.

---

### 🧪 Examples

#### Example 1:
Input: words = ["a", "app", "ap", "apply", "apple", "appl"]
Output: "apple"

Explanation:
All prefixes of "apple" → "a", "ap", "app", "appl" exist in the array.
"apply" is also valid, but "apple" is lexicographically smaller.



---

### ✅ Constraints

- `1 ≤ words.length ≤ 10^3`
- `1 ≤ words[i].length ≤ 30`
- `words[i]` contains only lowercase English letters

---

### 🧠 Approaches

#### ✔️ Approach 1: Using Set and Sorting
- Store all words in a `set` for fast prefix lookup.
- Sort `words` lexicographically.
- For each word, check if all prefixes exist in the set.
- Keep the longest (or lex smallest if equal length) valid word.

#### ✔️ Approach 2: Using Trie (Prefix Tree)
- Build a `Trie` from the input words.
- During DFS, only move to child nodes if the current node is the end of a word (prefix exists).
- Track the best word during traversal.

Both approaches run efficiently and pass all test cases.

---

### 💻 Tags

`Trie` `Hashing` `Prefix` `Strings` `Sorting` `Greedy`

---
