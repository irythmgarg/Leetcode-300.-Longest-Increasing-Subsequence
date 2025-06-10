// 📌 Problem: Longest Increasing Subsequence using Binary Replacement Technique
// ✍️ Author: Ridham Garg (Thapar Institute of Engineering and Technology)
// 📧 Email: Ridhamgarg000@gmail.com

class Solution {
public:
    // 🔍 Helper function to find the smallest element in arr[] >= a
    int findy(vector<int>& arr, int a) {
        int val = INT_MAX; // To keep track of minimum valid replacement
        int index = -1;    // Store index of replacement

        // 🔁 Linear scan to find suitable replacement index
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= a && arr[i] < val) {
                index = i;
                val = arr[i];
            }
        }
        return index;
    }

    int lengthOfLIS(vector<int>& nums) {
        vector<int> arr; // 🧱 Stores end values of potential LIS subsequences

        for (int i = 0; i < nums.size(); i++) {
            if (arr.empty()) {
                arr.push_back(nums[i]); // First element, always included
            } else {
                int find = findy(arr, nums[i]);

                if (find == -1) {
                    // ➕ Add new element to end if it's greater than all
                    arr.push_back(nums[i]);
                } else {
                    // 🔁 Replace with better (smaller) candidate to maintain lower tail
                    arr[find] = nums[i];
                }
            }
        }

        return arr.size(); // 🔢 Length of longest increasing subsequence
    }
};
