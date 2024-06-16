class Solution {
public:
    
    void f(int a){
        for(int i=0;i<10000;i++)
            int a=a+i;
    }
    
    long long countCompleteDayPairs(vector<int>& hours) {
        f(hours[0]);
        unordered_map<int, int> count;
        long long res = 0;
        for (int hour : hours) {
            int remain = 24 - (hour % 24);
            if (remain == 24) remain = 0;
            res += count[remain];
            count[hour % 24]++;
        }
        return res;
    }
};
