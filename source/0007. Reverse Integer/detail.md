# Intuition
I used strings to manipulate the integer. More about it in [Approach](#Approach).

# Approach
I first checked if the number was negative or not, and stored the boolean inside `negative`. Next I reversed the integer which was converted to a string. 

First I checked if `negative` was `True` it will only take the digits from the second index otherwiese from the first index. Next I reversed the string using `[::-1]`. Then finally I converted it to a integer again.

The next _if statement_ gives the negative property back to the numbers that were originally negative.

Finally I return `reverse` if it is between `2147483648` (_2^31_) and `-2147483649` (_-2^31-1_). If it is out of the range, I return `0`.

# Complexity
- Time complexity: `O(1)` | *Beats 70.64%*
- Space complexity: `O(1)` | *Beats 57.42%*

# Code
```Python
class Solution:
    def reverse(self, x: int) -> int:
        negative = x < 0
        reverse = int(str(x)[(1 if negative else 0):][::-1])
        if negative: reverse = -reverse
        return reverse if 2147483648 > reverse > -2147483649 else 0
```

# Proof

![37ms | Beats 70.64% ; 17.70MB Beats 57.42%](https://assets.leetcode.com/users/images/72c2714a-5b3a-4401-a6b2-9dcedd7cca43_1742454798.790245.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/reverse-integer/solutions/6558380/solution-for-reverse-integer-in-python-u-1d6b/).