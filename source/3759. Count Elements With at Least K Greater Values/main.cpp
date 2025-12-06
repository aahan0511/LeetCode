#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        if (k == 0)
            return nums.size();

        sort(nums.begin(), nums.end(), [](int a, int b) {
            return a > b; 
        });

        int i;
        for (i = k; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1])
                break;
        }

        return nums.size() - i;
    }
};