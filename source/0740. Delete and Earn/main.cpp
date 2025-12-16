#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int> freq_map;
        for (int &num : nums) {
            freq_map[num]++;
        }
        
        vector<int> cummulative = {};
        int prev = -1;
        for (pair<int, int> freq : freq_map) {
            if (prev != -1 && prev + 1 != freq.first) {
                cummulative.push_back(0);
            } 
            cummulative.push_back(freq.first * freq.second);
            prev = freq.first;
        }
        
        int n = cummulative.size();
        vector<int> dp(n + 2, 0);
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = max(cummulative[i] + dp[i + 2], dp[i + 1]);
        }
        
        return dp[0];
    }
};