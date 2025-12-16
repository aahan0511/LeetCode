#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int min_salary = INT_MAX;
        int max_salary = INT_MIN;
        int sum = 0;
        
        for (int s : salary) {
            sum += s;
            min_salary = min(min_salary, s);
            max_salary = max(max_salary, s);
        }
        
        return ((double)sum - min_salary - max_salary) / (salary.size() - 2);
    }
};