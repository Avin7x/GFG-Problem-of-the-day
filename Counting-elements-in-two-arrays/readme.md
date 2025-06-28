# 🧮 Count Elements Less Than or Equal (GFG)

**📅 Date:** June 28, 2025  
**🌐 Problem Link:** [GeeksforGeeks - Count Elements Less Than or Equal](https://www.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1) 

---

## 📝 Problem Statement

Given two arrays `a` and `b` of non-negative integers, for each element in array `a`, count how many elements in array `b` are less than or equal to it.

Return a new array of size equal to `a.size()`, where each element corresponds to the count for `a[i]`.

---

## 📥 Input

- Two integer arrays `a` and `b`.
- The size of each array can be up to `10^5`.
- Elements in `a` and `b` are integers such that `0 <= a[i], b[i] <= 10^5`.

---

## 📤 Output

- A vector `ans` where `ans[i]` contains the count of elements in `b` less than or equal to `a[i]`.

---

## 🔍 Example

**Input:**
```cpp
a = [1, 2, 3]
b = [2, 3, 1, 2]


Output:
[1, 3, 4]
Explanation:

For a[0] = 1, only one element (1) in b is ≤ 1.

For a[1] = 2, elements 1, 2, 2 are ≤ 2 → count = 3.

For a[2] = 3, all 1, 2, 2, 3 are ≤ 3 → count = 4.


Explanation:

For a[0] = 1, only one element (1) in b is ≤ 1.

For a[1] = 2, elements 1, 2, 2 are ≤ 2 → count = 3.

For a[2] = 3, all 1, 2, 2, 3 are ≤ 3 → count = 4.



🛠️ Approach
Use a frequency array to count occurrences of each number in b.

Construct a prefix sum array where prefix[i] is the total count of elements in b that are ≤ i.

For each element in a, look up prefix[a[i]] to get the result in constant time.

✅ Time and Space Complexity
Time Complexity: O(N + M + K), where:

N = size of a

M = size of b

K = max value in a or b (≤ 1e5)

Space Complexity: O(K) for frequency and prefix sum arrays

🧠 Tags
Arrays

Prefix Sum

Frequency Counting

Efficient Lookup

