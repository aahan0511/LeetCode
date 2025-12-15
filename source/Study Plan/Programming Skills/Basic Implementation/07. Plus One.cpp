// 66. Plus One

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size() - 1;
        int due = 1;
        while (due) {
            if (idx == -1) {
                digits.insert(digits.begin(), 1);
                break;
            }
            
            int &digit = digits[idx--];
            due = (digit + 1) / 10;
            digit = (digit + 1) % 10;
        }
        
        return digits;
    }
};