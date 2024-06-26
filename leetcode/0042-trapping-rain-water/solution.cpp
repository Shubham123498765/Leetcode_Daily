class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0)
            return 0;

        int water = 0;
        int max_height = INT_MIN;
        int max_ind = 0;
        int leftmax = 0, rightmax = 0;
        for (int i = 0; i < n; i++) {
            // max_height=max(max_height,height[i]);
            if (max_height < height[i]) {
                max_ind = i;
                max_height = height[i];
            }
        }
        for (int i = 0; i < max_ind; i++) {
            leftmax = max(leftmax, height[i]);
            water = water + min(max_height, leftmax) - height[i];
        }
        for (int i = n - 1; i > max_ind; i--) {
            rightmax = max(rightmax, height[i]);
            water = water + min(max_height, rightmax) - height[i];
        }

        return water;
    }
};
