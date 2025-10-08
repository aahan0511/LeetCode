# Intuition
This was a simple problem. My approach is not the most efficient but it gets the work done, and is easy to understand for beginners. Infact I did this question primarily to try C++.

# Approach 
I first check if `x` is `0`, if yes then I return `0`.
Then I initialize `i` and `quotient`. 

Now in the loop I go through numbers till `x`. But it doesn't finish the loop as in between when we see that a condition is met we return the square root.

The condition is that when the `quotient`, which is `x` divided by `i`, is...
1. Either equal to `i`, in that case `i` is the perfect squareroot of `x`.
2. Exceeded `i`, in that case we know we have went ahead of the required number and we return `i-1`.

Finally just for good measures we return `i`.

# Complexity
- Time complexity: `O(sqrt(x))`
- Space complexity: `O(1)` | *Beats 50.65%*

# Code
```cpp
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
```

# Proof

[![49ms | Beats 5.01% ; 8.60MB Beats 50.65%](https://assets.leetcode.com/users/images/47819c4a-795e-466e-9ea9-f88990d3db7d_1759938729.9978275.png)](https://leetcode.com/submissions/detail/1795452216/)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/sqrtx/solutions/7259550/solution-for-sqrtx-in-c-by-aahan0511-8n4z/).