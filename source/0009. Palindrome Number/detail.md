# Intuition
This has two ways, using **math** and using **strings**, no way is wrong. I have used _strings_ to fulfill this question. More about it in [Approach](#Approach).

# Approach
First I converted `x` to a `str` so that we reduce the redundant `str(x)`, and then in then while return I checked if `x` is the same as `x[::1]` which is a way of reversing strings.

If it is true than automatically `True` is returned else `False`.

# Complexity
- Time complexity: `O(1)` | *Beats 80.96%*
- Space complexity: `O(1)` | *Beats 88.75%*

# Code
```Python
class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        return x == x[::-1]
```

# Proof

![4ms | Beats 80.96% ; 17.61MB Beats 88.75%](https://assets.leetcode.com/users/images/467058e8-845b-426e-991e-9da0a46e1090_1742535307.6123881.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/palindrome-number/solutions/6561735/solution-for-palindrome-number-in-python-d4fq/).