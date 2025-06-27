# Intuition
This was a simple problem, but it might be tricky for beginners. This uses the concepts of simulation and hash maps. More about it in [Approach](#Approach).

# Approach
I first created a _dictionary_ or _hashmap_ with the values for the **roman numerals**. It contains all the conversions.

Next I initialized a `number` which would soon be the final output of the function. It is set to zero at start.

Next I use `enumerate` to iterate through `s` while also getting the index (`idx`) of each `char`. I only iterate till the second last numeral with `[:-1]`, I will explain why in a bit.

Next I create a variable `value` which stores the integer of the **roman numeral**. It is created to reduce redundant fetching.

Now we check if the next value, which I get by increasing the `idx` by `1`, is greater than the `value`. If it is then we subtract the current `value` from the `number`; i.e. suppose we have `"IV"`, as `"V"` is greater than `"I"`, we subtract `"I"` from the final `number`.
And otherwise we add it to `number`.

Now we only iterated till the second last value as if we would keep it full, it would give us a error in the `if statement`.

Finally we return the `number` along with the value of the last **numeral** which we skipped.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 65.20%*

# Code
```Python
class Solution:
    def romanToInt(self, s: str) -> int:
        values = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        number = 0
        for idx, char in enumerate(s[:-1]):
            value = values[char]
            if values[s[idx+1]] > value:
                number -= value
            else:
                number += value
        return number+values[s[-1]] 
```

# Proof

![0ms | Beats 100.00% ; 17.78MB Beats 65.20%](https://assets.leetcode.com/users/images/c8b30d21-083a-4928-aa47-799c7e6f5182_1742536860.0085192.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/roman-to-integer/solutions/6561845/solution-for-roman-to-integer-in-python-5akpy/).