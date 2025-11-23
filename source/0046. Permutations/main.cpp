#include <vector>
#include <map>
using namespace std;

class Solution {
    map<vector<int>, vector<vector<int>>> cache;

public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 1) {
            vector<vector<int>> ans = {nums};
            cache[nums] = ans;
            return ans;
        }
        if (nums.size() == 2) {
            vector<vector<int>> ans = {nums, {nums[1], nums[0]}};
            cache[nums] = ans;
            return ans;
        }

        vector<vector<int>> permutations;
        for (int idx = 0; idx < nums.size(); idx++) {
            vector<int> nums_copy(nums.begin(), nums.end());
            nums_copy.erase(nums_copy.begin() + idx);
            
            vector<vector<int>> cache_entry = cache[nums_copy];
            vector<vector<int>> perms;
            if (cache_entry.size() == 0)
                perms = permute(nums_copy);
            else
                perms = cache_entry;

            for (vector<int> perm : perms) {
                vector<int> value = {nums[idx]};
                value.insert(value.end(), perm.begin(), perm.end());
                permutations.push_back(value);
            }
        }

        return permutations;
    }
};