#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();

        int min_element = INT_MAX;
        int max_diff = -1;

        for (int i = 0; i < n; i++) {
            min_element = min(nums[i], min_element);
            int diff = nums[i] - min_element;
            max_diff = max(diff, max_diff);
        }

        return max_diff == 0 ? -1 : max_diff;
    }
};