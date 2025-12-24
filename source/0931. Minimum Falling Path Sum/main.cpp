#include <climits>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    vector<vector<int>> m;
    int a;
    int b;
    
    unordered_map<int, int> cache;
    
    int dp(int x, int y) {
        if (x == a - 1) return m[x][y];
        int key = x * 100 + y;
        if (cache.count(key)) return cache[key];
        
        int mini = dp(x + 1, y);
        if (y > 0) mini = min(mini, dp(x + 1, y - 1));
        if (y < a - 1) mini = min(mini, dp(x + 1, y + 1));
        
        return cache[key] = m[x][y] + mini;
    }
    
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        m = matrix;
        a = matrix.size();
        b = matrix[0].size();
        
        int mini = INT_MAX;
        for (int y = 0; y < b; ++y) {
            mini = min(mini, dp(0, y));
        }
        return mini;
    }
};