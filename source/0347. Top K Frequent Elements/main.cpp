#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequ;
        for (int num : nums) {
            frequ[num]++;
        }

        vector<pair<int, int>> freq(frequ.begin(), frequ.end());

        sort(freq.begin(), freq.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second > b.second; });

        vector<int> returning;
        for (pair<int, int> fre : freq) {
            returning.push_back(fre.first);
            if (returning.size() >= k) {
                break;
            }
        }

        return returning;
    }
};