class Solution {
public:
    int minimumLength(string s) {
        if(s.size()<3)
        return s.size();
        sort(s.begin(),s.end());
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ct=0;
        for(auto i:mp){
            while(i.second>=3){
                ct+=2;
                i.second-=2;
            }
        }
        return s.size()-ct;
        
    }
};
