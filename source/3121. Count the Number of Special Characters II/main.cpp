#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<pair<int, int>> occur(26, {-1, -1});
        for (int idx = 0; idx < word.size(); idx++) {
            char &c = word[idx];
            if (c > 96) {
                pair<int, int> &occurence = occur[c - 97];
                if (occurence.first == -1)
                    occurence.first = idx;
                else
                    occurence.first = max(occurence.first, idx);
            } else {
                pair<int, int> &occurence = occur[c - 65];
                if (occurence.second == -1)
                    occurence.second = idx;
            }
        }
        
        int special = 0;
        for (pair<int, int> &o : occur) 
            if (
                (o.first < o.second) && 
                (o.first != -1) && 
                (o.second != -1)
            )
                special++;
            
        return special;
    }
};