#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left(nums.size(), 1);
        for (int idx=1; idx < nums.size(); idx++) {
            left[idx] = left[idx - 1] * nums[idx - 1];
        }

        vector<int> right(nums.size(), 1);
        for (int idx=nums.size() - 2; idx >= 0; idx--) {
            right[idx] = right[idx + 1] * nums[idx + 1];
        }

        vector<int> answer(left.begin(), left.end());
        for (int idx=nums.size() - 2; idx >= 0; idx--) {
            answer[idx] *= right[idx];
        }

        return answer;
    }
};