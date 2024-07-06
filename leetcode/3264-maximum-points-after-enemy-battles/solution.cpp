class Solution {
public:
    long long maximumPoints(vector<int>& ee, int ceo) {
    sort(ee.begin(), ee.end());
    int n = ee.size();
    long long ce=ceo;
    if(ce<ee[0])
        return 0;
    for(auto &i:ee)
        ce+=i;
    ce-=ee[0];
    long long ans=0;
    return ans=ce/ee[0];
    }
};
