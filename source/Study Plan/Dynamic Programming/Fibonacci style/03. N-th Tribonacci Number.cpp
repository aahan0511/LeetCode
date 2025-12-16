// 1137. N-th Tribonacci Number

#include <unordered_map>
using namespace std;

class Solution {
    unordered_map<int, int> cache = {
        {0, 0},
        {1, 1},
        {2, 1},
        {3, 2},
        {4, 4},
    };
    
public:
    int tribonacci(int n) {
        return cache.count(n) ? cache[n] : (cache[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3));
    }
};