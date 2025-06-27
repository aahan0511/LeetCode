# Intuition
This was a really simple problem based on built-in string functions.
More about it in [Approach](#Approach).

# Approach
We return the string `s` after using the `.lower()` method on it which makes all characters lowercase. It goes like `return s.lower()`

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 93.59%*

# Code
```Python
class Solution:
    def toLowerCase(self, s: str) -> str:
        return s.lower()
```

# Proof
![image.png](https://assets.leetcode.com/users/images/0f707798-f9e0-4535-8f75-56cc2161ea00_1743176927.1869977.png)

# Support

If you liked this explanation and solution please **`upvote`** on [leetcode](https://leetcode.com/problems/to-lower-case/solutions/6590174/solution-for-to-lower-case-in-python-by-jxpxb/).