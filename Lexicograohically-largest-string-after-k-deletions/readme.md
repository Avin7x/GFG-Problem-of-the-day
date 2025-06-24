# 🔤 Lexicographically Largest String After K Deletions

**📅 Date**: 24 June 2025  
**🔗 Problem Link**: [Lexicographically Largest String After Deleting K Characters – GeeksforGeeks](https://www.geeksforgeeks.org/problems/lexicographically-largest-string-after-deleting-k-characters/1)

---

## 📝 Problem Statement

You are given a string `s` consisting of lowercase English letters and an integer `k`. Your task is to remove exactly `k` characters from the string such that the resulting string is the **lexicographically largest possible**, while maintaining the **relative order** of the remaining characters.

Return the resulting string.

---

## 🧪 Example

**Input**:  
s = "abcde"
k = 2

**Output**:  
cde


**Explanation**:  
We can remove `'a'` and `'b'` to get the string `"cde"`, which is the lexicographically largest possible after removing 2 characters.

---

## ✅ Constraints

- `1 <= s.length <= 10^5`
- `0 <= k < s.length`
- `s` contains only lowercase English letters

---

## 🚀 Optimal Approach (Greedy + Stack)

### Strategy:
- Use a **stack** or similar structure to build the answer greedily.
- Iterate through each character in the string:
  - While the current character is greater than the top of the stack and we still have deletions left (`k > 0`), pop from the stack.
  - Push the current character onto the stack.
- After traversing the string, if `k > 0`, remove the last `k` characters from the stack (to ensure exactly `k` deletions).
- Construct the final result from the characters in the stack.

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n)`  
  Each character is pushed and popped at most once.
  
- **Space Complexity**: `O(n)`  
  For storing the stack used in building the result.

---

## 📌 Tags

`Greedy`, `Stack`, `String`, `Lexicographical Order`, `Monotonic Stack`, `Optimization`
