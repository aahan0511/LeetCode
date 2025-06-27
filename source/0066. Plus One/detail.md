# Intuition
I tried different approaches; but only this approach suited the best. I don't know if this is the only approach, but it definitely will be understood by beginners. More about it in [Approach](#Approach).

# Approach
First we define the `remainder` which will be `1` as we will use the remainder as the starting addition of `1`.
We initialize the `idx` as `-1` because we want to operate from the last index.
We use the negative of digits' `len` as `length` as we are working with negative `idx`.

Now we have a `while` loop that says while the `remainder` is there; i.e. it is not `0`; and the `idx` is greater than `length` (as we are working with negative indices) it will do the math.

We first calculate the `digit` that is to be used. It is the sum of the digit at `idx` in `digits` and the `remainder`

Also setting the remainder to the ten's place of `digit` by dividing it by `10`. 
We then set the actual digit at `idx` in `digits` to the unit's place of the `digit` which is what we want.

Finally we _decrease_ the `idx` by `1` (again as we are working with negative indices).

Also we need to check if a `remainder` is left, we insert it in the starting of `digits`.

The `del` statement is just a good habit to get a low memory usage. It deletes the values of all the variales we used thus minimizing storage.

Finally we return `digits`.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 80.24%*

# Code
```Python
class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        remainder = 1
        idx = -1
        length = - len(digits)
        while idx >= length and remainder != 0:
            digit = digits[idx] + remainder
            remainder = digit // 10
            digits[idx] = digit % 10
            idx -= 1
        if remainder: digits.insert(0, remainder)
        del idx, remainder, digit
        return digits
```

# Proof

![0ms | Beats 100.00% ; 17.68MB Beats 80.24%](https://assets.leetcode.com/users/images/ca91cc09-083d-4cb1-8b43-87591a018203_1743000900.2524323.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/plus-one/solutions/6582466/solution-for-plus-one-in-python-by-aahan-9qke/).