class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total=0;
        for (int i : nums)
            total += i;
        
        if (total % 2 != 0)
            return false;
        int sum = total / 2;

        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
        // base case
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++)
                if (n == 0)
                    dp[i][j] = 0;
        }
        dp[0][0] = 1;

        for (int i = 1; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++)
                if (nums[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
        }
        return dp[n][sum];
    }
};
