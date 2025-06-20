# 🎱 Group Balls by Sequence

**📅 Date**: 20 June 2025  
**🔗 Problem Link**: [Group Balls by Sequence – GeeksforGeeks](https://www.geeksforgeeks.org/problems/group-balls-by-sequence/1)

---

## 📝 Problem Statement

You are given an array `arr[]` of positive integers, where each element `arr[i]` represents the number written on the `i`-th ball. You are also given a positive integer `k`.

Your task is to determine whether it is possible to **rearrange all the balls into groups** such that:

1. **Each group contains exactly `k` balls**.
2. The numbers in each group are **consecutive integers**.

Return `true` if it is possible to group the balls this way; otherwise, return `false`.

---

## 🧪 Example

**Input**:
```text
arr = [1, 2, 3, 6, 2, 3, 4, 7, 8], k = 3

Output:
true

Explanation:
We can divide the array into groups: [1,2,3], [2,3,4], [6,7,8] — all groups have exactly 3 consecutive numbers.


🚀 Approach
Check divisibility: If arr.size() % k != 0, it's impossible to group them evenly.

Use a frequency map (map<int, int>) to count the number of each integer.

Iterate through the sorted keys:

For each starting number, if it has non-zero frequency:

Try forming a group with k consecutive numbers.

Subtract 1 from the frequency of each number in the group.

If any number in the sequence is missing, return false.

If all groups are successfully formed, return true.

🧑‍💻 Time and Space Complexity
Time Complexity: O(n log n) — due to sorting keys in the map.

Space Complexity: O(n) — for frequency map.

📌 Tags
Hash Map, Sorting, Greedy, Grouping, Frequency Counting