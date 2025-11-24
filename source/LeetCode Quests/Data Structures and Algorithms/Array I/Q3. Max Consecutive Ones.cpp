#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_streak = 0;
        int streak = 0;

        for (int num : nums) {
            if (num) {
                streak ++;
            } else {
                max_streak = max(max_streak, streak);
                streak = 0;
            }
        }

        return max(max_streak, streak);
    }
};