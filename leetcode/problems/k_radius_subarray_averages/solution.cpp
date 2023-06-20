class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        //RUNTIME: 235 - 253 MS
        //TIME COMPLEXITY: O(n), where n is the size of the parameter nums
        //SPACE COMPLEXITY: O(1), assuming our return value doesn't count as extra space

        std::vector<int> returnVal(nums.size(), -1);

        if (k + k >= nums.size())
        {
            return returnVal;
        }

        int kFrontPtr = 0;
        int kBackPtr = k > 0 ? k + k : 0;
        long long sum = 0;
        int numOfSummedVals = kBackPtr + 1;
        for (int i = 0; i < numOfSummedVals; i++)
        {
            sum += nums[i];
        }

        returnVal[k] = static_cast<int>(sum / numOfSummedVals);

        for (int i = k + 1; i < nums.size() - k; i++)
        {
            sum -= nums[kFrontPtr++];
            sum += nums[++kBackPtr];
            returnVal[i] = static_cast<int>(sum / numOfSummedVals);
        }

        return returnVal;
    }
};