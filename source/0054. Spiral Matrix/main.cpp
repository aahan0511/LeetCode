#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
        
        char direction = 0;
        char x = 0;
        char y = 0;
        
        char max_x = matrix.size() - 1;
        char max_y = matrix[0].size() - 1;
        char min_x = 1;
        char min_y = 0;
        
        while (true) {
            spiral.push_back(matrix[x][y]);
            
            if (direction == 0) {
                if (y != max_y) {
                    y++;
                } else {
                    if (x == max_x) break;
                    direction = 1;
                    --max_y;
                    x++;
                    continue;
                }
            } else if (direction == 1) {
                if (x != max_x) {
                    x++;
                } else {
                    if (y == min_y) break;
                    direction = 2;
                    --max_x;
                    y--;
                    continue;
                }
            } else if (direction == 2) {
                if (y != min_y) {
                    y--;
                } else {
                    if (x == min_x) break;
                    direction = 3;
                    ++min_y;
                    x--;
                    continue;
                }
            } else if (direction == 3) {
                if (x != min_x) {
                    x--;
                } else {
                    if (y == max_y) break;
                    direction = 0;
                    ++min_x;
                    y++;
                    continue;
                }
            }
        }

        return spiral;
    }
};