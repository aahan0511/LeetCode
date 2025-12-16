#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> notes;
        
        for (int bill : bills) {
            if (bill == 5) { 
                ++notes[5]; 
            } else if (bill == 10) {
                ++notes[10];
                if (notes[5] == 0) return false;
                --notes[5];
            } else if (bill == 20) {
                if (notes[10] >= 1 && notes[5] >= 1) {
                    --notes[5];
                    --notes[10];
                } else if (notes[5] >= 3) {
                    notes[5] -= 3;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};