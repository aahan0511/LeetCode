#include <string>
using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
        int seen[26];
        int count = 0;
        for (char c : s) {
            if (!seen[c - 'a']) {
                seen[c - 'a'] = true;
                count++;
            }
        }

        return count;
    }
};