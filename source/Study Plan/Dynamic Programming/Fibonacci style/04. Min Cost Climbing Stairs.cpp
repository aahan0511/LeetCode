// 746. Min Cost Climbing Stairs

#include <vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, 0);
        
        for (int i = n-1; i >= 0; i--) {
            int one_step_next = i + 1;
            int two_step_next = i + 2;
            
            int one_step = cost[i];
            int two_step = cost[i];
            
            if (one_step_next < n) 
                one_step += dp[one_step_next];
            if (two_step_next < n) 
                two_step += dp[two_step_next];
            
            dp[i] = min(one_step, two_step);
        }
        
        return min(dp[0], dp[1]);
    }
};