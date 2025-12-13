#include <map>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int n = grid.size();
        
        map<int, int> y;
        map<int, int> outer;
        
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (
                    ((r == c) && ((r * 2) <= (n - 1))) ||
                    (((r + c) == (n - 1)) && ((r * 2) <= (n - 1))) ||
                    (((c * 2) == (n - 1)) && ((r * 2) >= (n - 1)))
                ) {
                    y[grid[r][c]]++;
                } else {
                    outer[grid[r][c]]++;
                }
            }
        }
        
        int y_contains = n + ((n - 1) / 2);
        int o_contains = (n * n) - y_contains;
        
        int min_ops = INT_MAX;
        for (int y1 = 0; y1 < 3; y1++) 
            for (int o1 = 0; o1 < 3; o1 ++) {
                if (y1 == o1) continue;
                min_ops = min(
                    min_ops,
                    ((y_contains - y[y1]) + (o_contains - outer[o1]))
                );
            }
        
        return min_ops; 
    }
};