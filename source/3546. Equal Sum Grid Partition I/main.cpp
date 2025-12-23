#include <vector>
using namespace std;

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        long total = 0;
        for (int x = 0; x < m; ++x) {
            for (int y = 0; y < n; ++y) {
                total += grid[x][y];
            }
        }
    
        long col_sum = 0;
        long col_remaining = total;
    
        long row_sum = 0;
        long row_remaining = total;
        
        // horizontal partion check
        for (int i = 0; i < m - 1; ++i) {
            for (int j = 0; j < n; ++j) {
                int cell = grid[i][j];
                row_sum += cell;
                row_remaining -= cell;
            }
            if (row_sum == row_remaining) return true;
        }
        
        // vertical partion check
        for (int j = 0; j < n - 1; ++j) {
            for (int i = 0; i < m; ++i) {
                int cell = grid[i][j];
                col_sum += cell;
                col_remaining -= cell;
            }
            if (col_sum == col_remaining) return true;
        }
        
        return false;
    }
};