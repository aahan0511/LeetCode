// 67. Add Binary

#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        string c = "";
        char remainder = '0';
        
        for (int i = 1; (i <= n || i <= m) || remainder == '1'; i++) {
            char x, y;
            if (i > n) x = '0';
            else if (i <= n) x = a[n - i];
            
            if (i > m) y = '0';
            else if (i <= m) y = b[m - i];
            
            int sum = (remainder == '1') + (x == '1') + (y == '1');
            remainder = sum > 1 ? '1' : '0';
            c = (sum % 2 == 1 ? '1' : '0') + c;
        }
        
        return remainder == '1' ? '1' + c : c;
    }
};