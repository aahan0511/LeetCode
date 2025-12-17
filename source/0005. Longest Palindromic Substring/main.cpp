#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string longest = s.substr(0, 1);
        int x = 1;
        for (int i = 0; i < s.size(); ++i) {
            auto expand = [&x, &longest, &s, &n] (int l, int r) {
                while (l >= 0 && r < n && s[l] == s[r]) {
                    if ((r - l + 1) > x) {
                        longest = s.substr(l, r - l + 1);
                        x = (r - l + 1);
                    }
                    l--; r++;
                }
            };
            expand(i, i + 1);
            expand(i, i);
        }
        return longest;
    }
};

// credit: https://www.youtube.com/watch?v=XYQecbcd6_c