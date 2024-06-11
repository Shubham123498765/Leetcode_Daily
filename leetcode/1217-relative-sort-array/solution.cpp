class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int maxElement = *max_element(arr1.begin(), arr1.end()); // Corrected max_element usage
        vector<int> v(maxElement + 1, 0); // Ensure we have a place for maxElement

        // Count the occurrences of each element in arr1
        for(int i = 0; i < arr1.size(); i++) {
            v[arr1[i]]++;
        }

        // Add elements to ans in the order they appear in arr2
        for(int i = 0; i < arr2.size(); i++) {
            while(v[arr2[i]] > 0) {
                ans.push_back(arr2[i]);
                v[arr2[i]]--; // Correct decrement for the specific element
            }
        }

        // Add remaining elements that were not in arr2
        for(int i = 0; i < v.size(); i++) {
            while(v[i] > 0) {
                ans.push_back(i); // Add the element itself, not v[i]
                v[i]--;
            }
        }

        return ans;
    }
};

