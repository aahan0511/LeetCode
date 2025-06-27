# Intuition
Even though this was a problemn marked **easy**, it is easy if we use _bruteforce_; but it is way efficient to use the _two pointer method_ which makes this be a **medium** I guess. More about my apporach in [Approach](#Approach).

# Approach
First we need to initialize two pointer `lPtr` (left pointer) and `rPtr` (right pointer). We initially set them to `0`.
Then we find out the length of `nums` and store it in `length`.

We then continue the `while` loop until `rPtr` is less than `length`. Doing so we restrict it to not go beyond `nums`.

In the `while` loop we check if `nums[rPtr]`; meaning if the element at `rPtr` in `nums` is not `0` as `0` means `False`; we will swap the places of the elements at `rPtr` and `lPtr`. Also increasing the `lPtr` by one.
And even if the `if` is not `True`; it will increase the `rPtr` by `1`

Now how this works is when we encounter a `0`; the `if` will not execute as `0` means `False` and only the `rPtr` will increase. But when we come accross a _number_  we execute the `if` which is just pushing the items ahead in the spaces, _if any_, left by the removing of `0`s.

# Complexity
- Time complexity: `O(n)` | *Beats 81.84%*
- Space complexity: `O(1)` | *Beats 49.21%*

# Code
```Python
class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        lPtr = 0
        rPtr = 0
        length = len(nums)
        while rPtr < length:
            if nums[rPtr]:
                nums[rPtr], nums[lPtr] = nums[lPtr], nums[rPtr]
                lPtr += 1
            rPtr += 1
```

# Proof

![3ms | Beats 81.84% ; 18.86MB Beats 49.21%](https://assets.leetcode.com/users/images/d8616fcb-8cd6-4660-82db-674debd21863_1742990295.9321795.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/move-zeroes/solutions/6581854/solution-for-move-zeroes-in-python-using-w40w/).