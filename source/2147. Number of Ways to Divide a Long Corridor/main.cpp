#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int numberOfWays(string corridor) {
        int c = count(corridor.begin(), corridor.end(), 'S');
        if (c % 2 == 1 || c == 0) 
            return 0;
        
        long long ways = 1;
        
        bool seats = false;
        int last_seat = -1;
        for (int i = 0; i < corridor.size(); i++) {
            char &c = corridor[i];
            
            if (c == 'S') {
                if (seats) {
                    last_seat = i;
                    seats = false;
                } else {
                    seats = true;
                    if (last_seat != -1) 
                        ways = (ways * (i - last_seat)) % 1000000007;
                }
            }
        }
        
        return ways;
    }
};