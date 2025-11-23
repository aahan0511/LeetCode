#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b)
             { return a > b; });

        int difference = arr[0] - arr[1];
        for (int idx = 1; idx < (arr.size() - 1); idx++) {
            if (arr[idx] - arr[idx + 1] != difference) {
                return false;
            }
        }

        return true;
    }
};