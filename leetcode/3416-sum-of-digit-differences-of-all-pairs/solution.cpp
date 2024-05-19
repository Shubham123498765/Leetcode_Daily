class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
          int n = nums.size();
        if (n < 2) return 0;

        // Get the number of digits from the first number
        string firstNum = to_string(nums[0]);
        int digitCount = firstNum.size();
        vector<vector<int>> digitFreq(digitCount, vector<int>(10, 0));

        // Count the frequency of each digit in each position
        for (int num : nums) {
            string s = to_string(num);
            for (int i = 0; i < digitCount; ++i) {
                digitFreq[i][s[i] - '0']++;
            }
        }

        long long totalDifference = 0;

        // Calculate the total digit differences
        for (int i = 0; i < digitCount; ++i) {
            for (int d1 = 0; d1 <= 9; ++d1) {
                for (int d2 = 0; d2 <= 9; ++d2) {
                    if (d1 != d2) {
                        totalDifference += digitFreq[i][d1] * digitFreq[i][d2];
                    }
                }
            }
        }

        // Since each difference is counted twice, we divide by 2
        return totalDifference / 2;
    }
};
