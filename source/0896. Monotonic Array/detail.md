# Intuition
This was a easy problem but requires a little optimized effort. More about my effort in [Approach](#Approach).

# Approach
First we check if the `len(nums)` is `1` we return `True` as it is _monotonic_.

Next we set `increase` to `None`, this will be changes later in the loop.
We also set the index (`idx`) to `0` and the `length` of `nums` to it's length minus `1`. We subtract `1` as we only need to iterate till the second last index.

Now the loop runs till the second last index. In the starting of the loop we say if the current element at `idx` and the next element at `idx+1` are equal, we increase `idx` by `1` and `continue`.

Outside the `if` we create a `statement`; if the current element is less than the next element, the `statement` is `True` otherwise `False`.

Now if `increase` was `None` we know that it is the first time the loop is running so we set `increase` to our `statement`.

Now if the loop has been running, we check if `increase` does not match my `statement`, we return `False`. And at last we increment `idx` by one.

Here even if `nums` in decreasing in _monotone_,  the `increase` would be originlly set to `False` by the loop and the code would not break.

Finally we return `True` as there was no disturbance to the `monotone` of `nums`.

# Complexity
- Time complexity: `O(n)` | *Beats 64.15%*
- Space complexity: `O(1)` | *Beats 90.99%*

# Code
```Python
class Solution:
    def isMonotonic(self, nums: list[int]) -> bool:
        if len(nums) == 1: return True
        increase = None
        idx = 0
        length = len(nums) - 1
        while idx < length:
            if nums[idx] == nums[idx+1]: 
                idx += 1
                continue
            statement = True if nums[idx] < nums[idx+1] else False
            if increase is None: increase = statement
            elif increase != statement: return False
            idx += 1
        return True
```

# Proof

![29ms | Beats 64.15% ; 28.83MB Beats 90.99%](https://assets.leetcode.com/users/images/09aecee8-85a0-4ed8-b087-3c9c73e0be41_1743176587.2164829.png)

# Support

If you liked this explanation and solution please **`upvote`** on [leetcode](https://leetcode.com/problems/monotonic-array/solutions/6590225/solution-for-monotonic-array-in-python-b-hwb8/).