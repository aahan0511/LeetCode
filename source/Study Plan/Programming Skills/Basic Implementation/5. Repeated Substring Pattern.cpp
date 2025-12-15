// 459. Repeated Substring Pattern

#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int l = s.size();
        
        for (int n = 1; n < l; n++) {
            if (l % n != 0) continue;
            
            const int x = l / n;
            string t = "";
            const string &u = s.substr(0, n);
            
            for (int i = 0; i < x; i++) {
                t += u;
            }
            if (t == s) return true;
        }
        return false;
    }
};