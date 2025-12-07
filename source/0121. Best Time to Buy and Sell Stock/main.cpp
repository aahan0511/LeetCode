#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = 10001;
        for (int price : prices) {
            min_price = min(price, min_price);
            max_profit = max(price - min_price, max_profit);
        }

        return max_profit;
    }
};