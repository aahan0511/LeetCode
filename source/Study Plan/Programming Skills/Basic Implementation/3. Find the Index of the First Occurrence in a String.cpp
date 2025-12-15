// 28. Find the Index of the First Occurrence in a String

#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == needle) return 0;

        int n = needle.size();
        int h = haystack.size() - n + 1;
        
        for (int i = 0; i < h; i++) {
            if (haystack.substr(i, n) == needle) return i;
        }
        
        return -1;
    }
};