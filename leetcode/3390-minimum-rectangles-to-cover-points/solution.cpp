class Solution {
public:
        int minRectanglesToCoverPoints(vector<vector<int>>& A, int w) {
        sort(A.begin(), A.end());
        int res = 0, last = -1;
        for (int i = 0; i < A.size(); i++) {
            if (A[i][0] > last) {
                res++;
                last = A[i][0] + w;
             }
        }
        return res;
    }
};
