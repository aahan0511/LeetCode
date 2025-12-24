#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(
            capacity.begin(), 
            capacity.end(), 
            [] (int a, int b) {return a > b;}
        );
        
        for (int idx = 0; idx < capacity.size(); idx++) {
            sum -= capacity[idx];
            if (sum <= 0) return idx + 1;
        }
        return capacity.size();
    }
};