#include <map>
using namespace std;

class Solution {
map<int, int> cache;
    
public:
    int climbStairs(int n) {
        if (n < 3) return n;
        if (cache.find(n) != cache.end())
             return cache[n];
        int ans = climbStairs(n - 1) + climbStairs(n - 2);
        cache[n] = ans;
        return ans;
    }
};