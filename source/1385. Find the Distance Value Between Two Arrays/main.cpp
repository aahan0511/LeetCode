#include <cstdlib>
#include <vector>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int dist = arr1.size();
        for (int num1 : arr1) {   
            for (int num2 : arr2) {   
                if (abs(num1 - num2) <= d) {
                    dist--;
                    break;
                }
            }
        }
        return dist;
    }
};