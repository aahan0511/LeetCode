# Intuition
We find the median of the mixture of the two arrays just like we do in math. More about it in [Approach](#Approach).

# Approach
We first create `merged`, which is the mixture of both of the arrays `nums1` and `nums2`. Then we find the `length` of `merged` by `len(merged)`. We also need to sort `merged`.

We then create a variable `mid` which is half of `length` so we don't have to compute it again and again, saving time.

Now for the return we first check that if `length % 2`, this indicates that if it returns 1, then the first part will be returned which is `merged[mid]`, otherwise it will return `( merged[mid-1] + merged[mid] ) / 2`, the basic median formula.

# Complexity
- Time complexity: `O((n + m) log (n + m))` | *Beats 100.00%*
- Space complexity: `O(n + m)` | *Beats 84.15%*

# Code
```Python
class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merged = sorted(nums1 + nums2)
        length = len(merged)
        mid = length // 2
        return merged[mid] if length % 2 else ( merged[mid-1] + merged[mid] ) / 2
```

# Proof

![0ms | Beats 100.00% ; 17.97MB Beats 84.15%](https://assets.leetcode.com/users/images/d8cb1981-4c9f-4032-bcc0-4fc7f4ca5fb4_1742449697.9470575.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/solutions/6558126/solution-for-median-of-sorted-arrays-in-wbhr4/).
