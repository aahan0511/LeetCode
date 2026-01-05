#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<vector<string>> valid;
        for (string top : words) {
            for (string left : words) {
                if (left == top || top[0] != left[0]) continue;
                for (string right : words) {
                    if (right == left || right == top || top[3] != right[0]) continue;
                    for (string bottom : words) {
                        if (bottom == right || bottom == left || bottom == top) continue;

                        if (
                            bottom[0] == left[3] &&
                            bottom[3] == right[3]
                        ) valid.push_back({top, left, right, bottom});
                    }
                }
            }
        }

        sort(valid.begin(), valid.end(), [] (vector<string> a, vector<string> b) {
            for (int i = 0; i < 4; i++) {
                if (a[i] == b[i]) continue;
                return a[i] < b[i];
            }
            return a[0] < b[0];
        });
        return valid;
    }
};
