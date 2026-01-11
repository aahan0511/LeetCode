#include <string>
#include <set>
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        set<char> freq;
        int distinct = 0;
        int length = 0;

        int count = 0;

        for (char c : s) {
            length++;
            if (!freq.count(c)){
                distinct++;
                freq.insert(c);
            }

            if (length % 3 == distinct)
                count++;
        }
        
        return count;
    }
};