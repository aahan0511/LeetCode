# Intuition
This was a easy problem with many approaches, but it was this [approach](#Approach) that I felt was the best.

# Approach
First we create a `new` list, which will store all the squares. We could have even sorted `nums` in the start, but that would have been inefficient because we would need to specify a _`key`_ (`abs()`).

Next as we iterate through `nums`, we `append` the square of each `num` to `new`.

And at last we return the `sorted(new)`.

# Complexity
- Time complexity: `O(n log n)` | *Beats 85.66%*
- Space complexity: `O(n)` | *Beats 89.07%*

# Code
```Python
class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        new = []
        for num in nums:
            new.append(num**2)
        return sorted(new)
```

# Proof

![7ms | Beats 85.66% ; 19.25MB Beats 89.07%](https://assets.leetcode.com/users/images/24aa705a-273c-47bc-8a43-1a32a0c99d42_1742534212.4091249.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/squares-of-a-sorted-array/solutions/6561693/solution-for-squares-of-array-using-pyth-8332/).