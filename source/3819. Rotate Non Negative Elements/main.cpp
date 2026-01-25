#include <utility>
#include <vector>
using namespace std;

class Solution {
vector<int> rotate(vector<int> &nums, int k, int n) {
    if (n == 0) return nums;
    k = k % n;

    vector<int> first_k(nums.begin(), nums.begin() + k);
    vector<int> last_k(nums.begin() + k, nums.end());
    last_k.insert(last_k.end(), first_k.begin(), first_k.end());

    return last_k;
}

public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> non_negative;
        vector<pair<int, int>> negative;
        for (int num : nums) {
            if (num < 0) {
                negative.push_back({
                    non_negative.size() + negative.size(),
                    num
                });
            } else {
                non_negative.push_back(num);
            }
        }

        vector<int> rotated_non_negative = rotate(non_negative, k, non_negative.size());
        for (pair<int, int> &neg : negative) {
            rotated_non_negative.insert(rotated_non_negative.begin() + neg.first, neg.second);
        }

        return rotated_non_negative;
    }
};
