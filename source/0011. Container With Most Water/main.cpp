#include <vector>
using namespace std;

class Solution {
    int amount(int height1, int height2, int width) {
        return min(height1, height2) * width;
    }

public:
    int maxArea(vector<int>& heights) {
        int maximum = 0;
        int i = 0, i_h;
        int j = heights.size() - 1, j_h;

        while (i < j) {
            i_h = heights[i];
            j_h = heights[j];
            maximum = max(amount(i_h, j_h, j - i), maximum);
            if (i_h < j_h)
                i++;
            else
                j--;
        }

        return maximum;
    }
};

// https://leetcode.com/problems/container-with-most-water/solutions/7261571/solution-for-container-with-most-water-i-rtbf/