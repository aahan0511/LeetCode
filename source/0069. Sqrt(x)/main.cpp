class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        int i;
        int quotient;
        for (i = 1; i <= x; i++) {
            quotient = x / i;
            if (quotient == i) 
                return i;
            else if (quotient < i)
                return i-1;
        }
        return i;
    }
};

// https://leetcode.com/problems/sqrtx/solutions/7259550/solution-for-sqrtx-in-c-by-aahan0511-8n4z/