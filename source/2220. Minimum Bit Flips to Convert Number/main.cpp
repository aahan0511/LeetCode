class Solution {
public:
    int minBitFlips(int start, int goal) {
        if (start == goal) return 0;

        int difference = start ^ goal;
        int count = 1;
        while (difference > 1) {
            count += difference % 2;
            difference >>= 1;
        }
        return count;
    }
};