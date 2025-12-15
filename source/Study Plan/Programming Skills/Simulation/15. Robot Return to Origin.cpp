// 657. Robot Return to Origin

#include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0;
        int right = 0;
        for (char move : moves) {
            if (move == 'U') ++up;
            if (move == 'D') --up;
            if (move == 'L') --right;
            if (move == 'R') ++right;
        }
        
        return up == 0 && right == 0;
    }
};