#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word) {}
        return word.size();
    }
};