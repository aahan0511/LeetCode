#include <vector>
using namespace std;

class Solution {    
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long sdp = 0; // sdp -> Smooth Descent Periods
        
        int start = 0;
        int prev = -1;
        for (int idx = 0; idx < prices.size(); idx++) {
            int &price = prices[idx];
            
            if (prev != -1 && prev - price != 1) {
                long n = idx - start;
                sdp += (n * (n + 1) / 2);
                start = idx;
            }
            prev = price;
        }
        
        long n = prices.size() - start;
        return sdp + (n * (n + 1) / 2);
    }
};