🐒 Koko Eating Bananas — GFG POTD (13 June 2025)
📅 Date: 13 June 2025

🔒 Problem Statement:
Koko loves to eat bananas. There are n piles of bananas, where the i-th pile has arr[i] bananas. The guards allow Koko to eat at most k hours. Each hour, she chooses a pile and eats up to s bananas from it. If the pile has less than s bananas, she eats the entire pile and doesn’t continue to the next one until the next hour.

Your task is to determine the minimum integer value of s (bananas per hour) such that Koko can eat all the bananas in the given k hours.

🧾 Input:
arr: A list of integers representing the number of bananas in each pile.

k: An integer representing the total number of hours allowed.

📤 Output:
Return the minimum speed s (bananas/hour) such that all piles are consumed within k hours.

🔒 Constraints:
1 ≤ arr.length ≤ 10^4

1 ≤ arr[i] ≤ 10^9

1 ≤ k ≤ 10^9

📌 Example:
Input:

arr = [5, 10, 15, 20]
k = 7
Output:


10
Explanation:
If Koko eats 10 bananas/hour:

1 hour for 5 bananas

1 hour for 10

2 hours for 15

2 hours for 20
Total: 6 hours ≤ 7 → ✅ Valid.

Trying lower than 10 fails to meet the hour limit.

💡 Approach:
Use Binary Search:

Search range: 1 to max(arr)

For a mid-speed s, check if Koko can finish all piles in k hours

If yes, try smaller s

If no, increase s

🧠 Complexity:
Time: O(n * log(max(arr)))

Space: O(1)

