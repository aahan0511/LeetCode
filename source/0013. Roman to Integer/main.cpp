#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> keys = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int subtract = 0;
        int num = 0;
        for (int i = 0; i < s.size(); ++i) {
            char &c = s[i];
            if (
                i < (s.size() - 1) && 
                keys[c] < keys[s[i + 1]]
            ) {
                subtract = keys[c];
            } else {
                num += keys[c] - subtract;
                subtract = 0;
            }
        }
        
        return num;
    }
};