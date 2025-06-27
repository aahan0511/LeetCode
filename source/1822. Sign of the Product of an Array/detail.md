# Intuition
This was a very simple and mathematical problem. We just had to apply basic mathematics to this question. More about it in [Approach](#Approach).

# Approach
We first check if `0` is in `nums`, if it is then we return `0`.

Then we create a `sign` which works as a switch. It will turn on and off.
We will loop through `nums` using `num` and whenever we encounter a negative `num` (less than `0`) we switch the `sign`.

We just need to return `sign`.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 66.55%*

# Code
```Python
class Solution:
    def arraySign(self, nums: List[int]) -> int:
        if 0 in nums: return 0
        sign = 1
        for num in nums:
            if num < 0: sign = -sign
        return sign
```

# Proof

![0ms | Beats 100.00% ; 17.83MB Beats 66.55%](https://assets.leetcode.com/users/images/4fadf7dc-2326-447f-9ee9-24fdf10683b2_1743002168.0955122.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/sign-of-the-product-of-an-array/solutions/6582511/solution-for-sign-of-product-of-an-array-6lrf/).