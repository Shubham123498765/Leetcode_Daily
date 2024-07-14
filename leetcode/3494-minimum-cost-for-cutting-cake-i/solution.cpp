class Solution {
public:
    int minimumCost(int m, int n, vector<int>& hc, vector<int>& vc) {
        int cost1 = 0;
        int cost2 = 0;
        for (int i = 0; i < vc.size(); i++) {
            cost1 += vc[i];
        }
        for (int i = 0; i < hc.size(); i++) {
            cost1 += n * hc[i];
        }
        for (int i = 0; i < hc.size(); i++) {
            cost2 += hc[i];
        }
        for (int i = 0; i < vc.size(); i++) {
            cost2 += m * vc[i];
        }
        sort(hc.begin(), hc.end(), greater<int>());
        sort(vc.begin(), vc.end(), greater<int>());
        int i = 0, j = 0, hcct = 0, vcct = 0, cost = 0;
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
