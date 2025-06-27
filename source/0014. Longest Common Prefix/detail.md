# Intuition
This was a easy problem but it has many different ways to solve it, if we use a little different approach, the _time_ or _space_ differs. More about my approach in [Approach](#Approach).

# Approach
First I found out which string had the minimum length, to do that I used the `min()` function along with the key of `len`, this gives me the minimum from `strs` based on the output of `len`.

Next I initialize a `common` which would store the common prefix.

Then I would iterate through the `minStr`, as if I select any other, it may lead to an error of exceeding index. We also use `enumerate` so that we get the `idx` along with the `char`.

With `all` we check if all the `Str` (we used `Str` as using `str` would cause an error due to it being a _keyword_) have the `char` at the specific `idx`, if so then we add `char` to `common`.
Otherwise it would `break` the loop leading it to return `common`.

# Complexity
- Time complexity: `O(n m)` | *Beats 100.00%*
- Space complexity: `O(m)` | *Beats 95.80%*

# Code
```Python
class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        minStr = min(strs, key=len)
        common = ""
        for idx, char in enumerate(minStr):
            if all(True if Str[idx] == char else False for Str in strs): common += char
            else: break
        return common
```

# Proof

![0ms | Beats 100.00% ; 17.69MB Beats 95.80%](https://assets.leetcode.com/users/images/2bff9ed4-352e-4544-bc1f-0a442b519a40_1742539140.9424367.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/longest-common-prefix/solutions/6561989/solution-for-longest-common-prefix-in-py-tytp/).