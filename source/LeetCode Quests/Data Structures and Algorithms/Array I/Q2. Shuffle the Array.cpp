#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer;

        for (int idx = 0; idx < n; idx++) {
            answer.push_back(nums[idx]);
            answer.push_back(nums[idx + n]);
        }

        return answer;
    }
};