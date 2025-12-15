// 1822. Sign of the Product of an Array

#include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool s = true;
        for (int num : nums) {
            if (num == 0)
                return 0;
            if (num < 0)
                s = !s;
        }
        return s ? 1 : -1;
    }
};