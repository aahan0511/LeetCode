// 1041. Robot Bounded In Circle

#include <string>
using namespace std;

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int axis = 1;
        int n = 0;
        int e = 0;
        
        for (char inst : instructions) {
            if (inst == 'G') {
                if (axis == 1) ++n;
                else if (axis == 2) ++e;
                else if (axis == 3) --n;
                else if (axis == 0) --e;
            } else if (inst == 'L') {
                axis = (axis + 3) % 4;
            } else if (inst == 'R') {
                axis = (axis + 1) % 4;
            }
        }
        
        return (n == 0 && e == 0) || axis != 1;
    }
};