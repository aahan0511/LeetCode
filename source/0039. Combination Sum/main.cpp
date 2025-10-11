#include <vector>
#include <set>
#include <numeric>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
    map<int, vector<vector<int>>> cache;

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if (target <= 0) {
            return {};
        }

        vector<vector<int>> cache_entry = cache[target];
        if (cache_entry.size() > 0) {
            return cache_entry;
        }
        set<vector<int>> paths;
        for (int candidate : candidates) {
            if (target == candidate) {
                paths.insert({candidate});
            } else if (target > candidate) {
                vector<vector<int>> can_paths = combinationSum(candidates, target - candidate);
                
                for (vector<int> can_path : can_paths) {
                    if (accumulate(can_path.begin(), can_path.end(), candidate) != target) continue;
                    vector<int> path = {candidate};
                    path.insert(path.end(), can_path.begin(), can_path.end());
                    sort(path.begin(), path.end());
                    paths.insert(path);
                }
            } 
        }

        vector<vector<int>> answer(paths.begin(), paths.end());
        cache[target] = answer;
        return answer;
    }
};

// https://leetcode.com/problems/combination-sum/solutions/7267005/solution-for-combination-sum-with-recurs-4cwh/