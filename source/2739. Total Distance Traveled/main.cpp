#include <algorithm>
using namespace std;

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int km_traveled = 0;
        int litres_used = 0;

        while (mainTank > 0) {
            int using_l = min(mainTank, 5);
            mainTank -= using_l;
            litres_used += using_l;
            km_traveled += using_l * 10;

            if (litres_used % 5 == 0 && additionalTank >= 1) {
                additionalTank--;
                mainTank++;
            }
        }

        return km_traveled;
    }
};