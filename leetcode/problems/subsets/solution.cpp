class Solution {
public:
    void solve( vector<vector<int>> &ans,vector<int>& nums,vector<int> output,int index){
        if(index>=nums.size()){
        ans.push_back(output);
        return;
        }

        solve(ans,nums,output,index+1);
        output.push_back(nums[index]);
        solve(ans,nums,output,index+1);
        // output.pop_back();


    }

    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
       vector<int> output;
       int index=0;
       solve(ans,nums,output,index);
       return ans; 
    }
};