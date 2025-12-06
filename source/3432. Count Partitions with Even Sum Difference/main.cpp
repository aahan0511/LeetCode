#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0) % 2 == 0 ? size(nums) - 1 : 0;
    }
};