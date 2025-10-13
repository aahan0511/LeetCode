#include <string>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        unsigned short int score = 0;
        unsigned char cur_c;
        unsigned char next_c;
        unsigned char idx;
        for (idx = 0; idx < s.size() - 1; idx++) {
            cur_c = s[idx];
            next_c = s[idx+1];
            score += abs(cur_c - next_c);
        }

        return score;
    }
};