// 3577. Count the Number of Computer Unlocking Permutations

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        auto min_c = min_element(complexity.begin(), complexity.end());
        if (
            complexity[0] == *min_c && 
            count(complexity.begin(), complexity.end(), *min_c) == 1
        ) {
            unsigned long fact = 1;
            for (int n = 2; n < complexity.size(); n++)
                fact = fact * n % 1000000007;
            return fact;
        }

        return 0;
    }
};