#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int row_flips = calculateRowFlips(grid, m, n);
        int col_flips = calculateColumnFlips(grid, m, n);
        
        return min(row_flips, col_flips);
    }

private:
    int calculateRowFlips(vector<vector<int>>& grid, int m, int n) {
        int total_flips = 0;
        for (int i = 0; i < m; ++i) {
            total_flips += countRowFlips(grid[i], n);
        }
        return total_flips;
    }
    
    int countRowFlips(vector<int>& row, int n) {
        int flips = 0;
        for (int j = 0; j < n / 2; ++j) {
            if (isDifferent(row[j], row[n - 1 - j])) {
                flips++;
            }
        }
        return flips;
    }
    
    int calculateColumnFlips(vector<vector<int>>& grid, int m, int n) {
        int total_flips = 0;
        for (int j = 0; j < n; ++j) {
            total_flips += countColumnFlips(grid, m, j);
        }
        return total_flips;
    }
    
    int countColumnFlips(vector<vector<int>>& grid, int m, int colIndex) {
        int flips = 0;
        for (int i = 0; i < m / 2; ++i) {
            if (isDifferent(grid[i][colIndex], grid[m - 1 - i][colIndex])) {
                flips++;
            }
        }
        return flips;
    }
    
    bool isDifferent(int a, int b) {
        return a != b;
    }
};

