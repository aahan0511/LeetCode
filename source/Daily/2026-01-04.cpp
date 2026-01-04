// 1390. Four Divisors

#include <vector>
using namespace std;

class Solution {
    static int cache[100001][2];

    void getFactors(int num) {
        int factors = 0;
        int f_sum = 0;
        int i = 1;
        for (; i*i < num; i++) {
            if (num % i == 0) {
                factors += 2;
                f_sum += (i + num / i);
            }
        }

        if (i*i == num) {
            factors++;
            f_sum += i;
        }

        cache[num][0] = factors;
        cache[num][1] = f_sum;
    }

public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            if (cache[num][0] == 0)
                getFactors(num);

            if (cache[num][0] == 4)
                sum += cache[num][1];
        }

        return sum;
    }
};

int Solution::cache[100001][2] = {{0, 0}};
