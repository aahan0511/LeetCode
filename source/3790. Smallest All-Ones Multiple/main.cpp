#include <set>
using namespace std;

class Solution {
public:
    int minAllOneMultiple(int k) {
        set<int> appeared;
        long long n = 1;
        long long m = 1;
        while (true) {
            int r = n % k;
            if (r == 0) return m;
            if (appeared.count(r)) return -1;
            appeared.insert(r);
            n = (n * 10 + 1) % k;
            m++;
        }
    }
};