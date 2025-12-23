#include <vector>
using namespace std;

class Solution {    
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int x = 0;
        int y = n - 1;
        
        while (x < m && y >= 0) {
            int cell = matrix[x][y];
            
            if (cell == target) return true;
            
            if (target > cell) x++;
            if (target < cell) y--;
        }

        return false;
    }
};