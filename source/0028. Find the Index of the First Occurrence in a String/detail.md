# Intuition
This problem was really easy in Python. And if you say that we shouldn't use built-in functions; see this - [comment by tlong1299 in discussion](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/comments/1570759/); this explains the reasons neatly. More about my approach in [Approach](#Approach).

# Approach
We just return the answer of the inbuilt function `find` of `haystack` with `needle`. This follows all the conditions well.

# Complexity
- Time complexity: `O(n m)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 51.81%*

# Code
```Python
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
```

# Proof

![0ms | Beats 100.00% ; 17.79MB Beats 51.81%](https://assets.leetcode.com/users/images/efdae7f0-3afc-4cf6-ad54-fc7daa3e63dc_1742904260.4575481.png)


# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/solutions/6577917/solution-for-find-the-index-in-python-us-be9n/).