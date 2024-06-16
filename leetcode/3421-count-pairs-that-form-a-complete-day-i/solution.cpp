class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int ct=0;
        int n=hours.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((hours[i]+hours[j])%24==0)
                    ct++;
            }
        }
        return ct;
    }
};
