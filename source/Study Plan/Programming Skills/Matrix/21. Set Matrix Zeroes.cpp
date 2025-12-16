// 73. Set Matrix Zeroes

#include <set>
#include <utility>
#include <vector>
using namespace std;

class Solution {
int m, n;
set<int> completed_rows;
set<int> completed_cols;
    
void convert(vector<vector<int>>& matrix, pair<int, int>& pos) {
    int row = pos.first;
    int col = pos.second;
    
    if (completed_rows.find(row) == completed_rows.end()) {
        for (int r = 0; r < n; ++r) {
            matrix[row][r] = 0;
        }
        completed_rows.insert(row);
    }
    
    if (completed_cols.find(col) == completed_cols.end()) {
        for (int c = 0; c < m; ++c) {
            matrix[c][col] = 0;
        }
        completed_cols.insert(col);
    }
}
    
public:
    void setZeroes(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        
        vector<pair<int, int>> positions;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) 
                    positions.push_back({i, j});
            }
        }
        
        for (pair<int, int> pos : positions)
            convert(matrix, pos);
    }
};