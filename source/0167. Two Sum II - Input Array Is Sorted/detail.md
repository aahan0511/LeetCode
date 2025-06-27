# Intuition
It was almost like [Two Sum](https://leetcode.com/problems/two-sum/description/)*, for which I used the  **two pointer method**. It works by maintaining two pointers, more about them in *[Approach](#Approach)*.

# Approach
The approach is called the two-pointer approach, and it is so because we maintain two pointers, and each pointer holds a index.
The left pointer (`l`) handles the first index of `1` and the right pointer (`r`) handles the last index of `len(nums)`. These are not the first and last indexes, but as the output needs to be **1-indexed**, we set them to `1` and `len(nums)`.

Next we check if the `ans` (the sum) is the target or not.
We get the values of `l` and `r` from `nums` to get the sum.
If it is, then we ofcourse return `l` and `r`.

Otherwise we will increase the `l` if the `ans` is less than the `target`, as `nums` is sorted, increasing `l` will increase the `ans`.
Similarly we decrease `r` if `ans` is greater than the `target`.

# Complexity
- Time complexity: `O(n)` | *Beats 81.78%*
- Space complexity: `O(1)` | *Beats 59.80%*

# Code
```Python
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        l, r = 1, len(nums)
        while l < r:
            ans = nums[l-1] + nums[r-1]
            if ans == target:
                return [l, r]
            if ans > target: r -= 1
            if ans < target: l += 1
```

# Proof
![0ms | Beats 81.78% ; 18.59MB Beats 59.80%](https://assets.leetcode.com/users/images/3c016b87-573b-4232-ab64-c37eaea8c2ea_1742402855.5004766.png)

# Support
If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/solutions/6556522/solution-for-two-sum-ii-in-python-with-t-3ozl/).
Also see [my solution for two sum](https://leetcode.com/problems/two-sum/solutions/6556443/solution-for-two-sum-in-python-with-two-davfo/).