#include <algorithm>
#include <climits>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
unordered_map<int, int> cache;
    
int m, n;
vector<vector<int>> matrix;

int returnMin(int x, int y) {
    if (x == m && y == n) return matrix[x][y];
    
    int key = x * 1000 + y;
    if (cache.count(key)) return cache[key];
    
    int right = y < n ? returnMin(x, y + 1) : INT_MAX;
    int down = x < m ? returnMin(x + 1, y) : INT_MAX;
    return cache[key] = matrix[x][y] + min(right, down);
}
    
public:
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size() - 1;
        n = grid[0].size() - 1;
        matrix = grid;
        
        return returnMin(0, 0);
    }
};