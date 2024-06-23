class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> ans;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            ans.push_back((nums[i]+0.0+nums[j])/2);
        }
        return *min_element(ans.begin(), ans.end());
    }
};
