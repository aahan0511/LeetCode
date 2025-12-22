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
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return {{}, nums};
        
        long long mask = encode(nums);
        if (cache.count(mask)) return cache[mask];
        
        vector<vector<int>> res = {{}};
        
        vector<int> new_nums(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            new_nums.erase(new_nums.begin());
            int num = nums[i];
            
            vector<vector<int>> subs = subsets(new_nums);
            for (vector<int> &sub : subs) {
                sub.push_back(num);
                res.push_back(sub);
            }
        }
        
        return cache[mask] = res;
    }
};