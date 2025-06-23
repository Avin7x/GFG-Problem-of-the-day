# Minimum Sum from Digits

### 🗓️ Date: 23 June 2025  
### 🌐 Problem Link: [GeeksforGeeks](https://www.geeksforgeeks.org/problems/minimum-sum4058/1)

---

## 🧩 Problem Statement

Given an array `arr[]` consisting of **digits** (0-9), the task is to form **two numbers** using **all the digits** such that their **sum is minimized**.  
Return the **minimum possible sum** as a **string**, ensuring **no leading zeroes**.

---

## 🧪 Example

### Input:
arr[] = [6, 8, 4, 5, 2, 3]


### Output:
"604"


### Explanation:
- One optimal way is to form numbers **358** and **246**.
- Their sum is **604**, which is the minimum possible.

---

## ✅ Constraints

- `1 ≤ length of arr ≤ 10^5`
- `0 ≤ arr[i] ≤ 9`

---

## 🧠 Approach (Optimal):

1. **Sort** the digits in ascending order.
2. Distribute them in such a way that **two numbers formed** have minimum possible sum:
   - Use a **greedy** method to assign digits alternately to the number with **less total so far**.
3. Construct both numbers as **strings** to avoid overflow.
4. Use a **manual string addition** method.
5. Ensure the result has **no leading zeros**.

---

## 🛠️ Key Functions Used

- `sort()` for sorting digits.
- Custom `addStrings()` to add two large numbers as strings.
- Greedy assignment to keep both numbers balanced.

---

