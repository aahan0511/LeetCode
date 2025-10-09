#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = 100001;
        for (int num : nums) {
            if (abs(num) <= abs(closest))
            if (num == -closest)
                closest = abs(num);
            else
                closest = num;
        }
        return closest;
    }
};

// https://leetcode.com/problems/find-closest-number-to-zero/solutions/7261615/solution-for-closest-number-to-zero-in-c-0gcv/