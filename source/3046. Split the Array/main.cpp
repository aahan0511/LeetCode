#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (pair<int, int> frequ : freq) {
            if (frequ.second > 2) {
                return false;
            }
        }
        return true;
    }
};