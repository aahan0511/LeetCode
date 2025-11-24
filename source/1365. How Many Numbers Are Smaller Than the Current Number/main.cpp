#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;

        for (int ref : nums) {
            int count = 0;
            for (int num : nums) {
                if (num < ref)
                    count++;
            }
            smaller.push_back(count);
        }

        return smaller;
    }
};