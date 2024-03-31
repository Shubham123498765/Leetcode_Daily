class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> len(n, 1);  // Initialize len array with 1

        // Calculate the length of alternating subarrays
        for (int i = n - 2; i >= 0; --i) {
            if ((nums[i] ^ nums[i + 1]) == 1) {
                len[i] = len[i + 1] + 1;
            }
        }

        // Calculate the total count of alternating subarrays
        long long total_count = 0;
        for (int i = 0; i < n; ++i) {
            total_count += len[i];
        }

        return total_count;
    }
};

