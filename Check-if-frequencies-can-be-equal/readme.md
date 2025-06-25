# 🔍 Check if Frequencies Can Be Equal

**📅 Date**: 25 June 2025  
**🔗 Problem Link**: [Check if Frequencies Can Be Equal – GeeksforGeeks](https://www.geeksforgeeks.org/problems/check-frequencies4211/1)

---

## 📝 Problem Statement

Given a string `s` consisting only of lowercase alphabetic characters, determine whether it is possible to **remove at most one character** such that the **frequency of each distinct character becomes the same**.

Return `true` if it is possible to achieve equal frequencies by removing at most one character; otherwise, return `false`.

---

## 🧪 Example

### Example 1:
**Input**:
s = "xyyz"


**Output**:
true


**Explanation**:  
Removing one `'y'` will result in `"xyz"`, where all characters have frequency 1.

---

## ✅ Constraints

- `1 <= s.length <= 10^5`
- `s` contains only lowercase English letters

---

## 🚀 Approach

### Strategy:
1. **Count frequencies** of all characters in the string.
2. Count how many times each frequency occurs (i.e., frequency of frequencies).
3. Based on the frequency distribution:
   - If all characters already have the same frequency → `true`
   - If one frequency appears only once and:
     - It's `1` (removable character), or
     - It's exactly 1 more than other frequencies → `true`
   - In all other cases → `false`

This approach handles edge cases like:
- One high frequency off by one
- A single letter with frequency 1
- All characters being the same

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n)`  
  For counting character frequencies and analyzing the distribution.

- **Space Complexity**: `O(1)`  
  Since we only deal with lowercase English letters (fixed size arrays or hash maps).

---

## 📌 Tags

`Hashing`, `Frequency Counting`, `Greedy`, `String`, `Edge Cases`, `Implementation`
