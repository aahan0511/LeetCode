# Intuition
This wasa really easy problem. More about it in [Approach](#Approach).

# Approach
We just convert both the strings to integers with base `2` add them and return the binary using `bin`. We need not return the first two digits `"0b"`, as it justs denotes the string as binary. We just return `[2:]`

# Complexity
- Time complexity: `O(n + m)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 98.61%*

# Code
```Python
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        return bin(int(a, 2) + int(b, 2))[2:]
```

# Proof

![0ms | Beats 100.00% ; 17.58MB Beats 98.61%](https://assets.leetcode.com/users/images/05147223-1e16-4cdf-96b7-01fb316cf85d_1742900864.2496011.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/add-binary/solutions/6577732/solution-for-add-binary-in-python-using-ic3hn/).
