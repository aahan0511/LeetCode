# Intuition
This was a _stack_ problem, it was easy but yet it does need basic understanding for stacks. More about it in [Approach](#Approach).

# Approach
First we define the opening brackets and closing brackets, like `openers` and `closers`. It holds the `(`, `[` and `{` for `openers` and `)`, `]`, `}` for `closers`. They have to be in the order.

Next we create a `stack` which is an array that acts like a _stack_ here.

We then have to iterate through `s` using `char`.
If `char` is in `openers`, we append it to our `stack`.

If it is not in `openers`, i.e. it is in `closers`, it will first check if the `stack` is empty, it will return `False`. 
We also check if the last item in stack is equal to the equivalent _opener_ from `openers`, if it is not then we return `False`.

If all conditions meet, we remove the last item from the `stack`.

Finally we return `True` if the stack is empty otherwise if it is incomplete, we return `False`.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 51.06%*

# Code
```Python
class Solution:
    def isValid(self, s: str) -> bool:
        openers = ["(", "[", "{"]
        closers = [")", "]", "}"]
        stack = []
        for char in s:
            if char in openers:
                stack.append(char)
            else:
                if not stack: return False
                if stack[-1] != openers[closers.index(char)]: return False
                stack.pop(-1)
        return True if not stack else False
```

# Proof

![0ms | Beats 100.00% ; 17.86MB Beats 51.06%](https://assets.leetcode.com/users/images/a7646f0f-828e-4904-be8e-651d9460f994_1742748282.3328598.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/valid-parentheses/solutions/6570936/solution-for-valid-parentheses-in-python-jg0q/).