class Solution {
public:
    int helper(vector<int> &coins,int sum,int n,vector<vector<int>> &dp){
       if(n == 0){
        if(sum % coins[0] == 0)
            return sum / coins[0]; // If yes, return the quotient as the answer
        else
            return 1e9;
        } 
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(coins[n-1]<=sum)
        return dp[n][sum]=min(1+helper(coins,sum-coins[n-1],n,dp),helper(coins,sum,n-1,dp));
        else
        return dp[n][sum]=0+helper(coins,sum,n-1,dp);
        
       }

    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans= helper(coins,amount,n,dp);
        if(ans==1e9)
        return -1;
        else 
        return ans;
    }
};
