class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double,pair<int,int>>> v;
                int n=arr.size();
                        for(int i=0;i<n;i++){
                                    for(int j=i+1;j<n;j++){
                                                    double temp=(arr[i]*1.0)/arr[j];
                                                                    v.push_back({temp,{arr[i],arr[j]}});
                                                                                }
                                                                                        }
                                                                                                sort(v.begin(),v.end());
                                                                                                        pair<int,int> p=v[k-1].second;
                                                                                                                vector<int> ans={p.first,p.second};
                                                                                                                        return ans;
    }
};
