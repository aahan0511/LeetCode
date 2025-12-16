#include <vector>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0];
        int x1 = coordinates[1][0];
        int y0 = coordinates[0][1];
        int y1 = coordinates[1][1];
        
        int dx = x0 - x1;
        int dy = y0 - y1;
        
        for (int i = 1; i < coordinates.size(); i++) {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            
            if ((x0 - x) * dy != dx * (y0 - y)) return false;
        }
        return true;
    }
};