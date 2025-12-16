#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
unordered_map<int, int> cache;
    
vector<vector<int>> grid;
int m, n;

int dfs(int x, int y) {
    if (grid[x][y] == 1) return 0;
    
    long key = x * 100 + y;
    if (cache.count(key)) return cache[key];
        
    if (x == m - 1 || y == n - 1) {
        for (int i = x; i < m; i++)
            for (int j = y; j < n; j++) 
                if (grid[i][j] == 1) 
                    return cache[key] = 0;
        return cache[key] = 1;
    }
    
    return cache[key] = dfs(x + 1, y) + dfs(x, y + 1);
}
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        grid = obstacleGrid;
        
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();
        
        if (obstacleGrid[m - 1][n - 1] == 1) return 0;
        
        return dfs(0, 0);
    }
};