#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        for (vector<int> account : accounts) {
            int wealth = 0;
            for (int bank : account) {
                wealth += bank;
            }
            richest = max(wealth, richest);
        }
        return richest;
    }
};