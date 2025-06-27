# Intuition
This was a problem with multiple approaches, I used the approach in which we count. More about it in [Approach](#Approach).

# Approach
First we create a `setT`, which means the _set of t_.

Then we go through every `char` in `setT` and if the counbt of `char` in `t` is greater than the count of `char` in `s`, we return that `char`.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 43.42%*

# Code
```Python
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        setT = set(t)
        for char in setT:
            if t.count(char) > s.count(char):
                return char
```

# Proof

![0ms | Beats 100.00% ; 17.84MB Beats 43.42%](https://assets.leetcode.com/users/images/e9e1247e-6a6b-4c8c-b334-6fe1d1e7a54f_1742903717.3887842.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/find-the-difference/solutions/6577887/solution-for-find-difference-in-python-u-j9bs/).