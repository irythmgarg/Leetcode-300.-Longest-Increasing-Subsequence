class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        // dp[i] will store the length of the LIS ending at index i
        vector<int> dp(n, 1);  // Initially, every element can form an LIS of length 1

        int ans = 1;  // To keep track of the maximum LIS found so far

        // Iterate over each element
        for (int i = 0; i < n; i++) {
            int j = 0;

            // Compare current element nums[i] with all previous elements nums[j]
            while (j < i) {
                if (nums[j] < nums[i]) {
                    // If nums[i] can extend the subsequence ending at nums[j]
                    dp[i] = max(dp[i], dp[j] + 1);
                }

                // Update the overall maximum LIS found so far
                ans = max(ans, dp[i]);

                j++;
            }
        }

        return ans;  // Return the length of the longest increasing subsequence
    }
};
