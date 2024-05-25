class Solution {
public:
     vector<int> queryResults(int limit, vector<vector<int>>& queries) {
     vector<int> result;
        unordered_map<int, int> ballColors;  // Track the current color of each ball
        unordered_map<int, int> colorCount;  // Track the count of each color
        
        int distinctColorCount = 0;
        
        for (auto& query : queries) {
            int ball = query[0];
            int color = query[1];
            
            // If the ball is already colored, we need to decrease the count of the old color
            if (ballColors.find(ball) != ballColors.end()) {
                int oldColor = ballColors[ball];
                colorCount[oldColor]--;
                if (colorCount[oldColor] == 0) {
                    distinctColorCount--;
                }
            }
            
            // Update the ball's color
            ballColors[ball] = color;
            colorCount[color]++;
            
            // If this is the first ball of this color, increase the distinct color count
            if (colorCount[color] == 1) {
                distinctColorCount++;
            }
            
            // Add the current number of distinct colors to the result
            result.push_back(distinctColorCount);
        }
        
        return result;
    }
};
