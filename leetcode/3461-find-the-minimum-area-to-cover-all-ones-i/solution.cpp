class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
       int rows=grid.size();
       int cols=grid[0].size();
        int l_col,h_col;
       int l_row=l_col=INT_MAX;
        int h_row=h_col=INT_MIN;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                l_row=min(i,l_row);
                l_col=min(j,l_col);
                h_row=max(i,h_row);
                h_col=max(j,h_col);
                }
            }
        }
        int wid=h_col-l_col+1;
        int hig=h_row-l_row+1;
        int area=wid*hig;
        
        return area;
    }
};
