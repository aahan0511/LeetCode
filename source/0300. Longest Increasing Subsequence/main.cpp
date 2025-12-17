#include <algorithm>
#include <vector>
using namespace std;

class Solution {
int maxLength(vector<int>& dp, vector<int>& nums, int x, int n) {
    int mL = 0;
    int &num = nums[x];
    for (int i = x + 1; i < n; ++i) {
        if (nums[i] > num) 
            mL = max(dp[i], mL);
    }
    
    return mL;
}
    
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;
        if (n == 2) return nums[0] >= nums[1] ? 1 : 2;
        
        vector<int> dp(n + 1, 1);
        for (int i = n - 2; i >= 0; i--) {
            dp[i] = maxLength(dp, nums, i, n) + 1;
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};