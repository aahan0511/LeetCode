class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ops = 0;
        
        while (target != 1 && maxDoubles != 0) {
            if (target % 2 == 1) {
                ops++;
                target--;
            }
            ops++;
            maxDoubles--;
            target /= 2;
        }
        return ops + (target - 1);
    }
};