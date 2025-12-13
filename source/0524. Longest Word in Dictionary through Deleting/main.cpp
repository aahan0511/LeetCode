#include <string>
#include <algorithm>
#include <vector>
using namespace  std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(
            dictionary.begin(), 
            dictionary.end(), 
            [] (string &a, string &b) {
                const int sizeA = a.size();
                const int sizeB = b.size();
                if (sizeA != sizeB) 
                    return sizeA > sizeB;
                return a < b;
            }
        );
        
        for (string &word : dictionary) {
            int last_char_idx = 0;
            for (char &c : word) {
                auto pos = s.find(c, last_char_idx);
                if (pos == string::npos) {
                    last_char_idx = -1;
                    break;
                }
                last_char_idx = pos;
            }
            if (last_char_idx != -1)
                return word;
        }
        
        return "";
    }
};

// https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/solutions/7410656/simple-c-solution-by-aahan0511-1zig/