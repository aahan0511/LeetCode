// 3788. Maximum Score of a Split

#include <limits.h>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        long long prefix_sum = accumulate(
            nums.begin(), 
            nums.begin() + n - 1, 
            0LL
        );

        long long suffix_min = nums[n - 1];

        long long maximum = LONG_LONG_MIN;
        for (int i = n - 2; i >= 0; i--) {            
            long long score = prefix_sum - suffix_min;
            long long num = nums[i];
            suffix_min = min(num, suffix_min);
            prefix_sum -= num;
            
            maximum = max(score, maximum);
        }
        
        return maximum;
    }
};