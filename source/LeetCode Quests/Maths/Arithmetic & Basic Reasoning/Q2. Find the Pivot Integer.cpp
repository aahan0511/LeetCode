class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n*(n+1))/2;
        int cur_sum = 0;
        for (int num = 1; num <= n; num++) {
            int num_sum = sum - num;
            if ((num_sum - cur_sum) == cur_sum) {
                return num;
            }
            cur_sum += num;
        }
        return -1;
    }
};