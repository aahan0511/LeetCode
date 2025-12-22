#include <climits>
#include <vector>
using namespace std;

class Solution {
    vector<int> memo;
    
    int dp(vector<int> &coins, int amount) {
        if (amount == 0) return 0;
        if (amount < 0) return -1;
        
        if (memo[amount] != -2) return memo[amount];
        
        int mini = INT_MAX;
        for (int coin : coins) {
            int new_mini = dp(coins, amount - coin);
            if (new_mini > -1) mini = min(mini, new_mini + 1);
        }
        
        return memo[amount] = (mini == INT_MAX ? -1 : mini);
    }
    
public:
    int coinChange(vector<int>& coins, int amount) {        
        memo.assign(amount + 1, -2);
        return dp(coins, amount);
    }
};