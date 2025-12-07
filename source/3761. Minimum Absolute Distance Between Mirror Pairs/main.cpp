#include <vector>
#include <map>
using namespace std;

class Solution {
int reverse_num(int n) {
    int rn = 0;
    for (; n > 0; n /= 10) {
        rn = rn * 10 + n % 10;
    }
    return rn;
}

public:
    int minMirrorPairDistance(vector<int>& nums) {
        map<int, int> revs;
        int min_dist = 1000000000;
        for (int idx = 0; idx < nums.size(); idx++) {
            int num = nums[idx];
            auto rev = revs.find(num);
            if (rev != revs.end()) {
                min_dist = min(idx - rev->second, min_dist);
                if (min_dist == 1) {
                    return 1;
                }
            }

            int rev_num = reverse_num(num);
            revs[reverse_num(num)] = idx;
        }

        return min_dist == 1000000000 ? -1 : min_dist;
    }
};