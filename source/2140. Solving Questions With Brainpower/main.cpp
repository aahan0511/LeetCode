#include <vector>
using namespace std;

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, 0);
        
        for (int i = n - 1; i >= 0; i--) {
            long long solve = questions[i][0];
            long long next = questions[i][1] + i + 1;
            if (next < n) solve += dp[next];
            
            long long skip = dp[i + 1];
            
            dp[i] = max(skip, solve);
        }
        
        return dp[0];
    }
};