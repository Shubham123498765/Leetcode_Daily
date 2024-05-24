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

    
    int coinChange(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1));
        // int ans= helper(coins,amount,n,dp);
        // if(ans==1e9)
        // return -1;
        // else 
        // return ans;
        // if (sum == 0) return 0; // If the sum is zero, no coins are needed
        // if (n == 0) return 1e9;
        for(int i=0;i<sum+1;i++) dp[0][i]=1e9;
        for(int i=0;i<n+1;i++) dp[i][0]=0;

        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(coins[i-1]<=j)
                dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][sum]>=1e9)
        return -1;
        else
        return dp[n][sum];

    }
};
