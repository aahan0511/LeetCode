#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
unordered_map<long long, vector<vector<int>>> cache;
    
long long encode(vector<int>& nums) {
    long long mask = 0;
    for (int &num : nums) {
        mask *= 20;
        mask += num + 10;
    }
    return mask;
}
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return {{}, nums};
        
        long long mask = encode(nums);
        if (cache.count(mask)) return cache[mask];
        
        vector<vector<int>> res = {{}};
        
        vector<int> new_nums(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            new_nums.erase(new_nums.begin());
            int num = nums[i];
            
            vector<vector<int>> subs = subsetsWithDup(new_nums);
            for (vector<int> &sub : subs) {
                sub.push_back(num);
                sort(sub.begin(), sub.end());
                res.push_back(sub);
            }
        }
        
        sort(res.begin(), res.end());
        for (int idx = 0; idx < res.size() - 1; idx++) {
            if (res[idx] == res[idx + 1]) {
                res.erase(res.begin() + idx);
                idx--;
            }
        }
        
        return cache[mask] = res;
    }
};