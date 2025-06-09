class Solution {
public:
    int n;
    int t[2501][2501];  // Memoization table: t[i][prevIndex], where prevIndex stores the last index used in subsequence

    // Recursive helper function to compute LIS
    int hlo(vector<int>& nums, int i, int lastelementindex) {
        if (i >= n)
            return 0;  // Base case: no more elements to consider

        int first = 0;

        // If a valid previous element exists and result already computed, return it
        if (lastelementindex != -1 && t[i][lastelementindex] != -1)
            return t[i][lastelementindex];

        // Option 1: Take current element if it's greater than the last included element in the subsequence
        if (lastelementindex == -1 || nums[i] > nums[lastelementindex]) {
            first = 1 + hlo(nums, i + 1, i);  // Include current element and move to next
        }

        // Option 2: Skip current element
        int second = hlo(nums, i + 1, lastelementindex);

        // Store and return the best of both choices
        if (lastelementindex != -1)
            return t[i][lastelementindex] = max(first, second);

        return max(first, second);  // Don't memoize when lastelementindex == -1 (can't store in array with -1 index)
    }

    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();  // Store size for reuse
        memset(t, -1, sizeof(t));  // Initialize memo table with -1
        return hlo(nums, 0, -1);   // Start from index 0 with no previous element
    }
};

