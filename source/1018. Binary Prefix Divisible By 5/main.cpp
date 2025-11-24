#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answers;
        unsigned long long int number = 0;

        for (int num : nums) {
            number = (number << 1) + num;
            answers.push_back(number % 5 == 0);

            number = number % 5;
        }

        return answers;
    }
};