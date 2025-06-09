# Leetcode-300.-Longest-Increasing-Subsequence

# 📈 Longest Increasing Subsequence (LIS)

> 🚀 Efficient solutions to find the **Longest Increasing Subsequence** using two powerful dynamic programming techniques: **Top-Down Memoization** and **Bottom-Up Tabulation**.

---

## 🧩 Problem Statement

Given an integer array `nums`, return the length of the **longest strictly increasing subsequence**.

A subsequence is derived from an array by deleting some or no elements without changing the order of the remaining elements.

---

## 🧠 Approaches

### ✅ 1. Top-Down (Memoization)

* Use recursion with memoization to avoid recalculating overlapping subproblems.
* We use a 2D DP table `dp[i][prevIndex]` where:

  * `i` is the current index in `nums`
  * `prevIndex` is the index of the last included number in the subsequence

### ✅ 2. Bottom-Up (Tabulation)

* Build the solution iteratively using a `dp[]` array where `dp[i]` stores the length of the LIS ending at index `i`.
* For each `i`, check all `j < i` and update `dp[i]` if `nums[i] > nums[j]`.

---

## 🕰️ Time Complexity

| Approach    | Time Complexity |
| ----------- | --------------- |
| Memoization | O(n²)           |
| Tabulation  | O(n²)           |

---

## 💾 Space Complexity

| Approach    | Space Complexity          |
| ----------- | ------------------------- |
| Memoization | O(n²) (due to memo table) |
| Tabulation  | O(n)                      |

---

## 📌 Example

```cpp
Input: nums = [10, 9, 2, 5, 3, 7, 101, 18]
Output: 4
Explanation: The LIS is [2, 3, 7, 101].
```

---

## 📚 Code Files

* `TopDown_LIS.cpp` – Recursive + Memoization
* `BottomUp_LIS.cpp` – Iterative DP

---

## 👨‍💻 Author

**Ridham Garg**

> Made with ❤️ by Ridham Garg

---

## 🏁 Happy Coding! 🚀
