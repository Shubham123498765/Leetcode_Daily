class Solution {
public:
     void f(int a){
        for(int i=0;i<10000;i++)
            int a=a+i;
    }
    
    long long maximumTotalDamage(vector<int>& power) {
        f(power[0]);
     std::unordered_map<int, long long> damage;
        for (int p : power) {
            damage[p] += p;
        }

        std::vector<int> unique_powers;
        for (const auto& pair : damage) {
            unique_powers.push_back(pair.first);
        }
        std::sort(unique_powers.begin(), unique_powers.end());

        int n = unique_powers.size();
        std::vector<long long> dp(n, 0);

        for (int i = 0; i < n; i++) {
            dp[i] = damage[unique_powers[i]];
            int j = i - 1;
            while (j >= 0 && unique_powers[i] - unique_powers[j] <= 2) j--;

            if (j >= 0) {
                dp[i] += dp[j];
            }

            if (i > 0) {
                dp[i] = std::max(dp[i], dp[i - 1]);
            }
        }

        return dp[n - 1];
    }
};
