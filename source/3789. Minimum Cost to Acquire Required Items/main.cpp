#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long maximum = (long long)max(need1, need2);
        long long minimum = (long long)min(need1, need2);
        long long case_1 = LONG_LONG_MAX;
        long long case_2 = LONG_LONG_MAX;
        
        // case 1
        if (cost1 + cost2 >= costBoth) {
            long long need1_1 = (long long)need1;
            long long need2_1 = (long long)need2;
            case_1 = minimum * (long long)costBoth;
            need1_1 -= minimum;
            need2_1 -= minimum;
            if (need1_1 > 0) {
                if (cost1 >= costBoth) case_1 += need1_1 * costBoth;
                else case_1 += need1_1 * (long long)cost1;
            } else if (need2_1 > 0) {
                if (cost2 >= costBoth) case_1 += need2_1 * (long long)costBoth;
                else case_1 += need2_1 * (long long)cost2;                
            }
        }
        
        //case 2
        else if (cost1 < costBoth && cost2 < costBoth) {
            case_2 = (long long)need1 * (long long)cost1 + (long long)need2 * (long long)cost2;
        }
        
        return min(case_1, case_2);
    }
};