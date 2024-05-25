class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int> seen;
        int xor_result = 0;
        
        for (int num : nums) {
            if (seen.count(num)) {
                xor_result ^= num; 
            } else {
                seen.insert(num); }
        }
        
        return xor_result;
    }
};
