#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        int idx;
        for (idx = 0; idx < word1.size() && idx < word2.size(); idx++) {
            word3.push_back(word1[idx]);
            word3.push_back(word2[idx]);
        }
        word3 += word1.substr(idx);
        word3 += word2.substr(idx);
        return word3;
    }
};