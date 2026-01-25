// 3813. Vowel-Consonant Score

#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int vowelConsonantScore(string s) {
        int c = 0;
        int v = 0;
        
        for (char a : s) {
            if (a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u')
                v++;
            else if (a > 97 && a < 123)
                c++;
        }

        if (c > 0) 
            return floor(v / c);
        else
            return 0;
    }
};