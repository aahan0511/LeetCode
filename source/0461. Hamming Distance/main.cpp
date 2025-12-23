class Solution {
public:
    int hammingDistance(int x, int y) {
        if (x == y) return 0;

        int difference = x ^ y;
        int count = 1;
        while (difference > 1) {
            count += difference % 2;
            difference >>= 1;
        }
        return count;
    }
};