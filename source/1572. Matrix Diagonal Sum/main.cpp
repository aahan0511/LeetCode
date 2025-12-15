#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        
        int n = mat.size() - 1;
        for (int i = 0; i <= n; ++i) {
            int x = i;
            int y1 = i;
            int y2 = n - i;
            
            int c1 = mat[x][y1];
            int c2 = mat[x][y2];
            
            sum += c1 + (y1 != y2 ? c2 : 0);
        }
        
        return sum;
    }
};