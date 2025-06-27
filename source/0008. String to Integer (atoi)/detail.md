# Intuition
This was a, not hard but tricky one. It has many edge cases, and you have to tackle through them. I myself got **Runtime Error** and **Wrong Answer** four times, before adding all the needed cases.
![Runtime Errors & Wrong Answers](https://assets.leetcode.com/users/images/74056dbe-12b8-4c43-8735-64f3a900f197_1742465540.755665.png)

# Approach
First I removed all the whitespaces by using `s.strip(" ")`. Then just for a annoying testcase I checked that if it is a empty string `""`, then return `0`.

Next I check if the first character is a `-` sign, if so then we set the `number` to start with `"-"` else `""`.

Then all we have to do is iterate through `s` but we need to check if the first character (`s[0]`) is a `+` or a `-`, we will start from `s[1]`.

Then we check if the `char` is a digit, if it is, we add it to `number` otherwise we `break` the loop. Here adding it means _concatenation_.

For the return statement we say return `0` if number is `""` or `"-"`, and if it is a number don't let it go beyond `2147483647` and `-2147483648`. The `min()` and `max()` take care of that.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 48.31%*

# Code
```Python
class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip(" ")
        if s == "": return 0
        number = "-" if s[0] == "-" else ""
        for char in s[(1 if s[0] in "+-" else 0):]:
            if char.isdigit(): number += char
            else: break
        return 0 if number in ["", "-"] else min(2147483647, max(-2147483648, int(number)))
```

# Proof

![0ms | Beats 100.00% ; 17.88MB Beats 48.31%](https://assets.leetcode.com/users/images/ee805111-b759-4a22-b7e2-508077381b6c_1742465222.9543824.png)

# Support

If you liked this explanation and solution please **`upvote`** on [leetcode](https://leetcode.com/problems/string-to-integer-atoi/solutions/6558918/solution-for-string-to-integer-in-python-ux5i/).