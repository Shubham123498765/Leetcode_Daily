class Solution {
public:
    int solve(int n,vector<int> &dp,vector<int> &cost){
    if(dp[n]!=-1) return dp[n];
    if(n==0) return cost[0];
    if(n==1) return cost[1];
    int onestep=solve(n-1,dp,cost);
    int twostep=solve(n-2,dp,cost);
    return dp[n]=cost[n]+min(onestep,twostep);
}

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return min(solve(n-1,dp,cost),solve(n-2,dp,cost));
    }
};
