// 120. Triangle

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
    vector<vector<int>> t;
    int m;
    
    unordered_map<int, int> cache;
    
    int dp(int x, int y) {
        if (x == m) return t[x][y];
        int key = x * 200 + y;
        if (cache.count(key)) return cache[key];
        return cache[key] = t[x][y] + min(dp(x + 1, y), dp(x + 1, y + 1));
    }
    
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        t = triangle;
        m = t.size() - 1;
        return dp(0, 0);
    }
};