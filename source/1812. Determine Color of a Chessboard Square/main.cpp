#include <string>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (
            ((coordinates[0] - 96) % 2) ^ 
            ((coordinates[1]) % 2)
        );
    }
};