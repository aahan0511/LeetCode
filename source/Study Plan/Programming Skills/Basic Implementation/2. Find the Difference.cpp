// 389. Find the Difference

#include <map>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> freq = {
            {t[size(s)], 1}
        };
        
        for (int i = 0; i < size(s); i++) {
            freq[t[i]]++;
            freq[s[i]]--;
        }

        for (const pair<char, int> &p : freq) {
            if (p.second == 1) return p.first;
        }

        return 0;
    }
};