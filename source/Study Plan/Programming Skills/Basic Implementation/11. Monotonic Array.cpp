// 896. Monotonic Array

#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool decreasing = nums[0] > nums[n - 1];
        
        for (int idx = 1; idx < n; ++idx) {
            if (
                (decreasing && (nums[idx - 1] < nums[idx])) || 
                (!decreasing && (nums[idx - 1] > nums[idx]))
            ) 
                return false; 
        }
        return true;
    }
};