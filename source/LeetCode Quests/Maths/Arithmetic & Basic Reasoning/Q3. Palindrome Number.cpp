#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);

        string str_x_flip = to_string(x);
        reverse(str_x_flip.begin(), str_x_flip.end());

        return str_x == str_x_flip;
    }
};