#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> inst;
        int tar_idx = 0;

        for (int num = 1; num <= n; num++) {
            inst.push_back("Push");

            if (num != target[tar_idx]) {
                inst.push_back("Pop");
                continue;
            }

            tar_idx++;
            if (tar_idx >= size(target))
            break;
        }

        return inst;
    }
};