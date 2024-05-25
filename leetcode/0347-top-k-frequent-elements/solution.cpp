class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count the frequency of each element and store in a map
        map<int, int> frequencyMap;
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // Step 2: Create a vector of pairs (frequency, element)
        vector<pair<int, int>> frequencyPairs(frequencyMap.begin(), frequencyMap.end());

        // Step 3: Sort the vector in descending order of frequencies
        sort(frequencyPairs.begin(), frequencyPairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        // Step 4: Collect the k most frequent elements
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(frequencyPairs[i].first);
        }

        return result;
    }
};
