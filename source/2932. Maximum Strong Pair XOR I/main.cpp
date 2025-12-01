#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int max_xor = 0;
        for (int x : nums) {
            for (int y : nums) {
                if (abs(x - y) <= min(x, y)) 
                    max_xor = max(max_xor, x ^ y);
            }
        }

        return max_xor;
    }
};