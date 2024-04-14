class Solution {
public:
    const int MAX_N = 100000;
    vector<bool> isPrime;

    Solution() {
        isPrime.resize(MAX_N + 1, true);
        sieve();
    }

    void sieve() {
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= MAX_N; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= MAX_N; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int minPrimeIndex = INT_MAX;
        int maxPrimeIndex = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (isPrime[nums[i]]) {
                minPrimeIndex = min(minPrimeIndex, i);
                maxPrimeIndex = max(maxPrimeIndex, i);
            }
        }

        if (minPrimeIndex == INT_MAX) {
            return 0;  // No prime numbers found
        }

        return maxPrimeIndex - minPrimeIndex;
    }
};
