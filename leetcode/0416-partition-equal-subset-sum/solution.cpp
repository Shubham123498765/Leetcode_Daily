class Solution {
public:
    bool subsetsum(vector<int> &nums, vector<vector<int>> &dp,int n,int target){
        //base case
        if(target==0) return true;
        if(n==0) return false;
        if(dp[n-1][target]!=-1)
            return dp[n-1][target];
        if(nums[n-1]<=target)
        return dp[n-1][target]=subsetsum(nums,dp,n-1,target-nums[n-1])||subsetsum(nums, dp,n-1,target);
        else return dp[n-1][target]=subsetsum(nums,dp,n-1,target);
    }

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(sum%2!=0)
        return false;
        int target=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return subsetsum(nums,dp,n,target);
    }
};
