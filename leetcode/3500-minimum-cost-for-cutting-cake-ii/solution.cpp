class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& hc, vector<int>& vc) {
   
        sort(hc.rbegin(), hc.rend());
        sort(vc.rbegin(), vc.rend());
        long long i = 0, j = 0, hcct = 0, vcct = 0;
        long long cost = 0;
        while (i < m - 1 && j < n - 1) {
            if (hc[i] >= vc[j]) {
                cost += hc[i] * (vcct + 1);
                hcct++;
                i++;
            } else {
                cost += vc[j] * (hcct + 1);
                vcct++;
                j++;
            }
        }

    
        while (i < m - 1) {
            cost += hc[i] * (vcct + 1);
            i++;
        }

        
        while (j < n - 1) {
            cost += vc[j] * (hcct + 1);
            j++;
        }

        return cost;
    }
};
