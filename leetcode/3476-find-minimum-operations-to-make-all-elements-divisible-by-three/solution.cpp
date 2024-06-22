class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ct=0;
        for(auto &i:nums){
            if(i%3!=0)
                ct++;
        }
        return ct;
    }
};
