#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
    
        int map[100001] = {0};
        int l = 0;
        int min_c = 100001;
        int sum = 0;
        
        for (int r = 0; r < n; ++r) {
            if (map[nums[r]]++ == 0) {
                sum += nums[r];
            }
            while (sum >= k) {                    
                min_c = min(r - l + 1, min_c);
                if (--map[nums[l]] == 0) {
                    sum -= nums[l];
                }
                l++;
            }
        }
        
        return min_c == 100001 ? -1 : min_c;
    }
};