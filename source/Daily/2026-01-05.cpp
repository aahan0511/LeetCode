// 1975. Maximum Matrix Sum

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        bool count = false;
        int min_neg = INT_MAX;
        long long sum = 0;

        for (vector<int> row : matrix)
            for (int cell : row)  {
                if (cell < 0) {
                    count = !count;
                    sum -= cell;
                } else {
                    sum += cell;
                }
                min_neg = min(min_neg, abs(cell));
            }

        return sum - 2 * (count ? min_neg : 0);
    }
};
