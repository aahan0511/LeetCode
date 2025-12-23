#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int x = 0;
        for (x = 0; x < m - 1; x++) {
            int cell = matrix[x][0];
            int next_cell = matrix[x + 1][0];
            if (cell == target) return true;
            if (cell < target) {
                if (next_cell > target) break;
                else {
                    if (x == m - 2) {
                        x = m - 1; 
                        break;
                    } continue;
                };
            };
        }
        for (int y = 0; y < n; y++) {
            if (matrix[x][y] == target) return true; 
        }
        return false;
    }
};