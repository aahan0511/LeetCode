# Intuition
This was an easy yet tricky problem. If you are well-versed with strings, this might be easy for you. More about my approach in [Approach](#Approach).

# Approach
We first need to find the length of the string `s` with will be `length`. Next we create a `cntr` (counter) which would be the point of seperation. We start from the `length` divided by `2` as it is the maximum we can get. Also we increase it by one, as for the sake of complexity we decrease it at the starting of the loop.

We then do a `while` loop which says it will run until the `cntr` is more than `1`. We used `1` here instead of `0` as we started the `cntr` with a headstart of `1`.

Next as I said before I reduce `cntr` by `1` and check, if `length` and `cntr` give a remainder other than `0`, meaning they are not divisible; we `continue`.

Otherwise we see if the part of the `s` before `cntr` (`s[:cntr]`) multiplied by the `length` divided by `cntr` is equal to `s` again, meaning it is a duplicate series we return `True`.

We return `False` at the end of the loop.

# Complexity
- Time complexity: `O(n)` | *Beats 68.36%*
- Space complexity: `O(1)` | *Beats 57.32%*

# Code
```Python
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        length = len(s)
        cntr = length // 2 + 1
        while cntr > 1:
            cntr -= 1
            if length % cntr != 0: 
                continue
            if s[:cntr] * (length // cntr) == s:
                return True
        return False
```

# Proof

![3ms | Beats 68.36% ; 17.86MB Beats 57.32%](https://assets.leetcode.com/users/images/805f9147-5252-4160-97b1-a6cc8dfe69cb_1742988244.8756404.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/repeated-substring-pattern/solutions/6581752/solution-for-repeated-substring-pattern-ygsrs/).