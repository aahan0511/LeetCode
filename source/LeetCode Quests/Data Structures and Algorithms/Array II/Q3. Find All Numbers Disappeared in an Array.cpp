#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s_nums(nums.begin(), nums.end());
        vector<int> v_nums(s_nums.begin(), s_nums.end());
        sort(v_nums.begin(), v_nums.end());
        v_nums.push_back(0);

        vector<int> missing;
        int exp = 1;

        for (int idx = 0; idx < size(v_nums); idx++) {
            if (exp > size(nums)) break;
            if (v_nums[idx] != exp) {
                missing.push_back(exp);
                idx--;
            }
            exp++;
        }
        return missing;
    }
};