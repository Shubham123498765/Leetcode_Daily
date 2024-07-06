class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& color) {
        // vector<int> copy(2*colors.size(),0);
        // for(int i=0;i<colors.size();i)

        // int i=0;
        color.push_back(color[0]);
        color.push_back(color[1]);
        int ans=0;
        for(int i=0;i<color.size()-2;i++){
            if(color[i]==0 && color[i+1]==1 &&color[i+2]==0)
                ans++;
            if(color[i]==1 && color[i+1]==0 &&color[i+2]==1)
                ans++;
        }
        return ans;

    }
};
