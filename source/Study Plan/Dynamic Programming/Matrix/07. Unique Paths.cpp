// 62. Unique Paths

#include <unordered_map>
using namespace std;

class Solution {
    unordered_map<long long, int> cache;
    
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1) return 1;
        if (m == 2 || n == 2) return max(m, n);
        
        long long key = max(m, n) * 1000 + min(m, n);
        return cache.count(key) ? cache[key] : cache[key] = (uniquePaths(m - 1, n) + uniquePaths(m, n -1));
    }
};