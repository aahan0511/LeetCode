#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
    unordered_map<int, vector<string>> cache;
    
    vector<string> dp(int o, int c) {
        int key = o * 10 + c;
        if (cache.count(key)) return cache[key];
        
        if (o == 0) {
            string cB = "";
            for (int i = 0; i < c; ++i) cB += ")";
            return cache[key] = {cB};
        }
        vector<string> outs;
        
        for (string a : dp(o - 1, c)) {
            outs.push_back("(" + a);
        }
        if (c > o) {
            for (string a : dp(o, c - 1)) {
                outs.push_back(")" + a);
            }
        }
        return cache[key] = outs;
    }
    
public:
    vector<string> generateParenthesis(int n) {
        if (n == 1) return {"()"};
        if (n == 2) return {"()()", "(())"};
        return dp(n, n);
    }
};