// 1925. Count Square Sum Triples

#include <cmath>

class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                if (a == b) continue;
                double c = pow(pow(a, 2) + pow(b, 2), 0.5);
                if (c - int(c) == 0 && c <= n) {
                    count++;
                }
            }
        }
        return count;
    }
};