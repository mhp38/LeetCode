class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();
        int peri = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j]) {
                    peri += 4;

                    if (i != 0 && grid[i - 1][j])
                        peri -= 2;//two adjacent grids loose 1 side each. So total 2 sides lost
                    if (j != 0 && grid[i][j - 1])
                        peri -= 2;
                }
            }
        }
        return peri;
    }
};
