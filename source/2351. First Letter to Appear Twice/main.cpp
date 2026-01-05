#include <string>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        unsigned long map = 0;
        for (char c : s) {
            int power = 1 << (c - 97);
            if (map & power) return c;
            map |= power;
        }

        return -1;
    }
};