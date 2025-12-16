#include <unordered_map>
using namespace std;

class Solution {
unordered_map<int, int> cache = {
    {0, 0},
    {1, 1},
    {2, 1},
    {3, 2},
    {4, 3},
}; // THIS CAN BE ENLARGED AS BIG AS WANTED; BUT THIS SEEMS ENOUGH
    
public:
    int fib(int n) {
        return cache.count(n) ? cache[n] : (cache[n] = fib(n - 1) + fib(n - 2));
    }
};