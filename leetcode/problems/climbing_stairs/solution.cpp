class Solution {
public:
    int helper(int n,vector<int>& dp){
        if(n==0) return 1;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        int l=helper(n-1,dp);
        int r=helper(n-2,dp);
        return dp[n]=l+r;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int prev=1;
        int prev2=1;
        int curr=1;
        for(int i=2;i<=n;i++){
            curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return curr;
    }
};