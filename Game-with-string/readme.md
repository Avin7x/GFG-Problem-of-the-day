# 🎮 Game With String

**📅 Date**: 26 June 2025  
**🔗 Problem Link**: [Game With String – GeeksforGeeks](https://www.geeksforgeeks.org/problems/game-with-string4100/1)

---

## 📝 Problem Statement

Given a string `s` consisting of **lowercase alphabets** and an integer `k`, your task is to find the **minimum possible value** of the string after removing exactly **k characters**.

The **value of the string** is defined as the **sum of the squares of the frequencies** of each distinct character present in the string.

Your goal is to choose and remove `k` characters such that this value is minimized.

---

## 🧪 Examples

### Example 1:
**Input**:
s = "abbccc", k = 2


**Output**:
6


**Explanation**:
- Option 1: Remove two `'c'` → frequencies: `a=1, b=2, c=1` → value = 1² + 2² + 1² = 6  
- Option 2: Remove one `'b'` and one `'c'` → frequencies: `a=1, b=1, c=2` → value = 1² + 1² + 2² = 6  
- Both result in the minimum value 6.

---

## ✅ Constraints

- `1 <= |s| <= 10^5`
- `1 <= k <= |s|`
- `s` consists only of lowercase English letters.

---

## 🚀 Optimal Approach (Greedy + Max Heap)

### Strategy:
1. **Count frequencies** of each character in the string.
2. Push all frequencies into a **max heap** (priority queue).
3. Perform `k` operations:
   - Pop the highest frequency.
   - Decrease it by 1 (simulate removing the most frequent character).
   - Push it back into the heap (if still > 0).
4. After all removals, compute the **sum of squares** of the remaining frequencies.

This greedy approach ensures we always reduce the character contributing the most to the total value.

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n + k log d)`  
  - Where `n` is the length of the string and `d` is the number of distinct characters (max 26).
- **Space Complexity**: `O(d)`  
  - For storing frequencies in the heap.

---

## 📌 Tags

`Greedy`, `Priority Queue`, `Heap`, `String`, `Frequency Counting`, `Optimization`
