#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";

        for (int i = 0; i < log2(k); i++) {
            string temp = str;
            for (char chr : temp)
            {
                str += chr + 1;
            }
        }

        return str[k-1];
    }
};