#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long count = 0;

        map<int, int> before, after;
        for (int num : nums)
            if (num % 2 == 0)
                after[num]++;

        for (int j : nums) {
            after[j]--;

            long i = before[j * 2];
            long k = after[j * 2];

            count += i * k;

            before[j]++;
        }

        return count % 1000000007;
    }
};