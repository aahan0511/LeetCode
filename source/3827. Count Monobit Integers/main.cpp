#include <cmath>
using namespace std;

class Solution {
public:
    int countMonobit(int n) {
    	if (n == 1) return 2;
        return (int)log2(n + 1) + 1;
    }
};
