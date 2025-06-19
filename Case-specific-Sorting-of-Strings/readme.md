# 🔠 Case-Specific Sorting of a String

**📅 Date**: 19 June 2025  
**🔗 Problem Link**: [Case-specific Sorting of Strings – GeeksforGeeks](https://www.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1)

---

## 📝 Problem Statement

Given a string `s` consisting of uppercase and lowercase letters, sort the characters **independently by case** — that is:

- All **uppercase** letters should be sorted among themselves.
- All **lowercase** letters should be sorted among themselves.
- The **relative positions of uppercase and lowercase letters must remain unchanged**.

Return the resulting string after this case-specific sort.

---

## 📥 Input

A single string `s` of length `n`.

- `1 <= n <= 1000`
- `s` contains only English letters (`A-Z`, `a-z`)

---

## 📤 Output

Return the case-sorted string maintaining the original case positions.

---

## 💡 Example

**Input**:  
`s = "defRTSersUXI"`

**Output**:  
`"deeIRSfrsTUX"`

**Explanation**:  
- Lowercase letters: `d, e, f, e, r, s, e, r, s` → Sorted: `d, e, e, f, r, r, s, s`
- Uppercase letters: `R, T, S, U, X, I` → Sorted: `I, R, S, T, U, X`
- Final string: Replace uppercase with sorted uppercase and lowercase with sorted lowercase in original positions.

---

## 🚀 Approach

1. **Separate** the characters into two groups: `upper` and `lower`.
2. **Sort** both groups independently.
3. **Reconstruct** the string by replacing characters in original order:
   - Use next from `upper` if original character is uppercase.
   - Use next from `lower` if original character is lowercase.

---

## 🧠 Concepts Used

- String Manipulation
- Sorting
- Two-pointer Technique

---

## 💡 Complexity

- **Time Complexity**: `O(n log n)` — sorting characters by case
- **Space Complexity**: `O(n)` — for storing result and case-separated characters

---