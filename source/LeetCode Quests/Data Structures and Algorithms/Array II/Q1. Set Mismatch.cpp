#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = size(nums);
        int n_s = (n * (n + 1)) / 2;
        int c_s = accumulate(nums.begin(), nums.end(), 0);

        sort(nums.begin(), nums.end());

        for (int idx = 0; idx < size(nums) - 1; idx ++) {
            if (nums[idx] == nums[idx + 1])
                return {nums[idx], nums[idx] + (n_s - c_s)};
        }

        return {};
    }
};