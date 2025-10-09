#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int missing = (size * (size + 1)) / 2;
        for (int num : nums) {
            missing -= num;
        }
        return missing;
    }
};

// https://leetcode.com/problems/missing-number/solutions/7261786/solution-for-missing-number-in-c-by-aaha-b3ci/