// 3531. Count Covered Buildings

#include <vector>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        map<int, pair<int, int>> x;
        map<int, pair<int, int>> y;
        
        for (vector<int> &building : buildings) {
            int bX = building[0];
            int bY = building[1];
            
            if (!x.count(bX))
                x[bX] = {INT_MIN, INT_MAX};
            if (!y.count(bY))
                y[bY] = {INT_MIN, INT_MAX};
            
            x[bX] = {
                max(x[bX].first, bY),
                min(x[bX].second, bY)
            };
            y[bY] = {
                max(y[bY].first, bX),
                min(y[bY].second, bX)
            };
        }
        
        int count = 0;
        for (vector<int> &building : buildings) {
            int bX = building[0];
            int bY = building[1];
            pair<int, int> xX = x[bX];
            pair<int, int> yY = y[bY];
            
            if (
                xX.first > bY &&
                xX.second < bY &&
                yY.first > bX &&
                yY.second < bX
            )
                count ++;
        }
        
        return count;
    }
};  