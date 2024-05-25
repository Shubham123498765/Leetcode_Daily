class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=x)
                nums[i]=0;

        // for(int i:nums)
        //     cout<<i<<" ";
        
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                v.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            if(queries[i]>v.size())
                ans.push_back(-1);
            else 
                ans.push_back(v[queries[i]-1]);
        }
        return ans;
    }
};
