class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> parity_change(n, 0);
        
        // Fill the parity_change array
        for (int i = 1; i < n; ++i) {
            if (nums[i] % 2 != nums[i - 1] % 2) {
                parity_change[i] = 1;
            }
        }

        // Create prefix sum array for parity changes
        vector<int> prefix_parity_change(n, 0);
        prefix_parity_change[0] = parity_change[0];
        for (int i = 1; i < n; ++i) {
            prefix_parity_change[i] = prefix_parity_change[i - 1] + parity_change[i];
        }

        // Process queries
        vector<bool> res;
        for (const auto& q : queries) {
            int start = q[0];
            int end = q[1];

            if (start == end) {
                res.push_back(true);
                continue;
            }

            // Calculate the number of parity changes in the range [start + 1, end]
            int num_changes = prefix_parity_change[end] - prefix_parity_change[start];
            res.push_back(num_changes == end - start);
        }

        return res;
    }
};
