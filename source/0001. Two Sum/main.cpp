#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> compliments;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (abs(target - nums[i]) >= 0) compliments[nums[i]].push_back(i);
        }
        
        for (int j = 0; j < n; j++) 
            for (int c : compliments[target - nums[j]])
                if (c != j) 
                    return {c, j};

        return {-1, -1};
    }
};