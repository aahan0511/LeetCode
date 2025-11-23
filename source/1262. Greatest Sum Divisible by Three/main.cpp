#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        map<int, vector<int>> rem_nums = {
            {1, {}},
            {2, {}}
        };
        int sum = 0;

        for (int idx = 0; idx < size(nums); idx++) {
            int num = nums[idx];
            sum += num;

            if (num % 3 == 1) {
                rem_nums[1].push_back(num);
            } else if (num % 3 == 2) {
                rem_nums[2].push_back(num);
            }
        }
        int rem = sum % 3;

        if (rem == 0) {
            return sum;
        }
        sort(rem_nums[1].begin(), rem_nums[1].end());
        sort(rem_nums[2].begin(), rem_nums[2].end());
        if (rem == 1) {
            if (size(rem_nums[1]) == 0) {
                return (sum - rem_nums[2][0] - rem_nums[2][1]);
            } else if (size(rem_nums[2]) < 2) {
                return (sum - rem_nums[1][0]);
            }
            int using_1 = rem_nums[1][0];
            int using_2 = rem_nums[2][0] + rem_nums[2][1];
            return (sum - min(using_1, using_2));
        } else {
            if (size(rem_nums[2]) == 0) {
                return (sum - rem_nums[1][0] - rem_nums[1][1]);
            } else if (size(rem_nums[1]) < 2) {
                return (sum - rem_nums[2][0]);
            }
            int using_1 = rem_nums[1][0] + rem_nums[1][1];
            int using_2 = rem_nums[2][0];
            return (sum - min(using_1, using_2));
        }
    }
};