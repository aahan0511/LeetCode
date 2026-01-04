// 3794. Reverse String Prefix

#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
        string k_s = s.substr(0, k);
        reverse(k_s.begin(), k_s.end());
        string s_s = s.substr(k);
        
        return k_s + s_s;
    }
};