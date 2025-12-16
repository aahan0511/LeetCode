// 976. Largest Perimeter Triangle

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(
            nums.begin(),
            nums.end(),
            [] (int a, int b) {
                return a > b;
            }
        );
        
        for (int i = 0; i < nums.size() - 2; i++) {
            int &n1 = nums[i];
            int &n2 = nums[i + 1];
            int &n3 = nums[i + 2];
            if ((n2 + n3) > n1) 
                return n1 + n2 + n3;
        }
        
        return 0;
    }
};