# Intuition
This was a really simple problem based on built-in string functions.
More about it in [Approach](Approach).

# Approach
We return the `len` of last word of `s.split(" ")` which divides it into words. We need to use `.strip()` to remove leading and ending whitespaces. `[-1]` is used to get the last item.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 88.67%*

# Code
```Python
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.strip().split(" ")[-1])
```

# Proof

![image.png](https://assets.leetcode.com/users/images/ce7d34d8-b5b9-4ac5-badb-785e14275029_1743074214.460553.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/length-of-last-word/solutions/6585778/solution-for-length-of-last-word-in-pyth-u2dw/).
