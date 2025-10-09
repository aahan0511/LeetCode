# Intuition
A really basic problem. I cracked this using Bruteforce and it was really easy.

# Approach 
I loop through the given array `nums` and for every number first I check if it's `abs` (value without the sign, absolute value) is less than that of the `abs` of `closest`, we can consider the `num`.

The next condition I have to see is that if the number is the `num` with the same `abs` as the `closest`, we only consider the higher one.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 80.15%*

# Code
```cpp
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = 100001;
        for (int num : nums) {
            if (abs(num) <= abs(closest))
            if (num == -closest)
                closest = abs(num);
            else
                closest = num;
        }
        return closest;
    }
};
```

# Proof

[![0ms | Beats 100.00% ; 23.22MB Beats 80.15%](https://assets.leetcode.com/users/images/cf920379-0255-4abd-a6a7-910f9b45f491_1760012949.386337.png)](https://leetcode.com/submissions/detail/1796322010/)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/find-closest-number-to-zero/solutions/7261615/solution-for-closest-number-to-zero-in-c-0gcv/).