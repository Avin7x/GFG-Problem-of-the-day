# 💰 POTD - Coin Piles (17 June 2025)

**Problem Link**: [Coin Piles](https://www.geeksforgeeks.org/problems/coin-piles5152/1)

## 📝 Problem Statement

You are given an array `arr[]` of size `n` representing the number of coins in each pile, and an integer `k`. You can remove **any number of coins** from **any number of piles** such that after the operation, **every pile contains at most `arr[i] + k` coins** for some pile `i`.

Your goal is to remove the **minimum total number of coins** to make this condition true for all piles.

---

### Example:

**Input**:  
`arr = [3, 1, 4, 1, 5]`, `k = 2`

**Output**:  
`4`

**Explanation**:  
One optimal way is to choose the pile with value 3. Then every other pile must have value ≤ 3 + 2 = 5.  
Remove coins from other piles so that all values ≤ 5 and minimize the total coins removed.

---

## 🚀 Approach

### ✅ Optimized Strategy:

1. **Sort the array** to evaluate each possible base pile.
2. **Use prefix sums** to calculate the total coins that need to be removed from the left of the current pile.
3. For the right side, calculate the excess coins from values exceeding `arr[i] + k` using:

coins_to_remove = prefixSum[n-1] - prefixSum[idx-1] - target * (n - idx)

where `target = arr[i] + k`, and `idx` is the first index where `arr[idx] > target`.

4. Use **binary search** (`upper_bound`) to find the right index efficiently.

---

## 🧠 Concepts Used

- Greedy + Optimization
- Binary Search
- Prefix Sum
- Sorting

---

## 💡 Time and Space Complexity

- **Time Complexity**: `O(n log n)`  
- Due to sorting and binary search per pile.
- **Space Complexity**: `O(n)` for prefix sums.

---

## 📅 Date

**17 June 2025** – GeeksForGeeks POTD

---

## 📌 Tags

`Greedy`, `Binary Search`, `Sorting`, `Prefix Sum`, `Optimization`

