#include <map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if (n != t.size()) 
            return false;
        
        map<char, int> freq_s;
        map<char, int> freq_t;
        
        for (int i = 0; i < n; i++) {
            freq_s[s[i]]++;
            freq_t[t[i]]++;
        }
        return freq_s == freq_t;
    }
};