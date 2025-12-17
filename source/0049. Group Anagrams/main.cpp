#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 1) return {{strs[0]}};
        
        map<string, vector<string>> anagrams;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            anagrams[t].push_back(s);
        }
        
        vector<vector<string>> ag;
        for (pair<string, vector<string>> a : anagrams) {
            ag.push_back(a.second);
        }
        return ag;
    }
};