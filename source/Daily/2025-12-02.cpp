// 3623. Count Number of Trapezoids I

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, int> same_x;
        
        for (auto& point : points) {
            same_x[point[1]]++;
        }

        long sum = 0;
        long sqsum = 0;
        for (pair<int, int> x : same_x) {
            long n = x.second;
            long pos = ((n - 1) * n) / 2;
            sum += pos;
            sqsum += pos * pos;
        }

        return (((sum * sum) - sqsum) / 2) % 1000000007;
    }
};