class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        int i = 0, j=0, flag = 1, ans = 0,n=m.size();
        sort(m.begin(), m.end());
        int maxi = m[j][1];

        for (i; i < m.size(); i++) {
            j = i;
            while (j!= m.size()-1 && maxi>=m[j+1][0]) {
                // if (m[j][1] < maxi && m[j][0]<maxi) {
                //     j++;
                //     continue;
                // }
                j++;
                flag = 0;
                maxi = max(maxi, m[j][1]);
            }

            if (flag == 0) {
                ans = ans + maxi - m[i][0] + 1;
                i = j;
                flag = 1;
            } else
                ans = ans + m[i][1] - m[i][0] + 1;
                maxi=max(maxi,m[min(i+1,n-1)][1]);
        }
        return days - ans;
    }
};
