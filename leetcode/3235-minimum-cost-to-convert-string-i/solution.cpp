class Solution {
public:
    long long minimumCost(string s, string t, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long long>> v(26,vector<long long>(26,INT_MAX));
        long long n=cost.size();
        for(long long i=0;i<n;i++){
            long long c=cost[i];
            v[original[i]-'a'][changed[i]-'a']=min(v[original[i]-'a'][changed[i]-'a'],c);
        }
        for(long long from=0;from<26;from++){
            for(long long i=0;i<26;i++){
                for(long long j=0;j<26;j++){
                    v[i][j]=min(v[i][j],(v[i][from]+v[from][j]));
                }
            }
        }
        long long ans=0;
        n=s.size();
        for(long long i=0;i<n;i++){
            if(s[i]!=t[i]){
                if(v[s[i]-'a'][t[i]-'a']==INT_MAX){
                    return -1;
                }else{
                    ans+=v[s[i]-'a'][t[i]-'a'];
                }
            }
        }
        return ans;
    }
};
