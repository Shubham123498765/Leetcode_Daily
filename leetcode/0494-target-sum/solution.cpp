class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if((target+sum)%2 || target+sum <0) return 0;
        int a=(target+sum)/2,n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(a+1,0));
        dp[0][0]=1;
        for(int i=1;i<n+1;i++){
            for(int j=0;j<a+1;j++){
                if(nums[i-1]<=j)
                dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][a];
    }

};
