#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(), points.end());

        int rects = 1;
        int start = points[0][0];
        for (vector<int> &point : points) {
            // cout << rects << " " << start << " " << point[0] << " " << point[1] << " " << start + w << endl;
            if (point[0] > start + w) {
                rects++;
                start = point[0];
            }
        }
        return rects;
    }
};
