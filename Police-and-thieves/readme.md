# 🚓 Police and Thieves

**📅 Date**: 21 June 2025  
**🔗 Problem Link**: [Police and Thieves – GeeksforGeeks](https://www.geeksforgeeks.org/problems/police-and-thieves--141631/1)

---

## 📝 Problem Statement

You are given an array `arr[]` of size `n` consisting only of the characters `'P'` (Police) and `'T'` (Thief), and an integer `k` which represents the maximum distance a police officer can catch a thief.

Your task is to determine the **maximum number of thieves** that can be caught by police officers under the following constraints:

- Each police officer can catch **only one thief**.
- A thief can only be caught by a police officer **within a distance `k`** (either to the left or right).
- The order of elements in the array matters.

---

## 🧪 Example

**Input**:  
n = 5
k = 1
arr = ['P', 'T', 'T', 'P', 'T']


**Output**:  
2


**Explanation**:
- Police at index 0 catches the thief at index 1.
- Police at index 3 catches the thief at index 2.
- Thief at index 4 cannot be caught by any police due to distance constraints.

---

## 🚀 Optimal Approach (No Extra Space)

### ✅ Strategy:
- Use two pointers to scan the array:
  - One pointer tracks the next police (`'P'`).
  - The other tracks the next thief (`'T'`).
- If both are within `k` distance, it's a valid catch, and both pointers move forward.
- If not, advance the pointer pointing to the character that is behind.
- This avoids any need for extra space like queues or vectors.

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n)`  
  A single pass through the array using two pointers.

- **Space Complexity**: `O(1)`  
  Constant space — no additional data structures used.

---

## 📌 Tags

`Greedy`, `Two Pointers`, `Sliding Window`, `Implementation`, `In-Place`, `Arrays`
