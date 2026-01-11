#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            set<int> inside;

            for (int j = i; j < n; j++) {
                int num = nums[j];
                
                sum += num;
                inside.insert(num);

              
                if (inside.count(sum)) 
                    count++;
            }
        }
        return count;
    }
};