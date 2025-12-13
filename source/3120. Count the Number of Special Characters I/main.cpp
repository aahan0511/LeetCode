#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<pair<bool, bool>> occured(
            26,
            {false, true}
        );
        int special = 0;
        
        sort(word.begin(), word.end());
        for (char &c : word) {
            if (c > 64 && c < 91) occured[c - 65].first = true;
            else {
                pair<bool, bool> &up_c = occured[c - 97];
                if (up_c.first && up_c.second) {
                    special++;
                    up_c.second = false;
                }
            }
        }
        
        return special;
    }
};