class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
       const int MOD = 1000000007;
        std::vector<int> a(n, 1);
        
        for (int t = 0; t < k; ++t) {
            std::vector<int> new_a(n);
            new_a[0] = a[0];
            for (int i = 1; i < n; ++i) {
                new_a[i] = (new_a[i - 1] + a[i]) % MOD;
            }
            a = new_a;
        }
        
        return a[n - 1];    
    }
};
