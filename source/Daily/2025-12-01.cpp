// 2141. Maximum Running Time of N Computers

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
long long maxRunTime(int n, vector<int>& batteries) {
    sort(batteries.begin(), batteries.end(), [](int a, int b)
    { return a > b; });
    vector<int> live(batteries.begin(), batteries.begin()+n);
    reverse(live.begin(), live.end());
    
    long long extra = accumulate(batteries.begin() + n, batteries.end(), 0LL);
    
    int idx;
    for (idx = 0; idx < size(live) - 1; idx++) {
        int required = (live[idx + 1] - live[idx]) * (idx + 1);
            if (extra < required)
            break;
            extra -= required;
        }
        
        return live[idx] + (extra / (idx + 1));
    }
};

// CREDIT TO EDITORIAL: https://leetcode.com/problems/maximum-running-time-of-n-computers/editorial/
