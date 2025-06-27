# Intuition
I tried many different methods, but then I thought of the **two pointer method**. It works by maintaining two pointers, more about them in *[Approach](#Approach)*.

# Approach
The approach is called the two-pointer approach, and it is so because we maintain two pointers, and each pointer holds a index.
The left pointer (`lPtr`) handles the first index of `0` and the right pointer (`rPtr`) handles the last index of `len(nums) - 1`.

Now we create a sorted copy of the list as `copy`.
The while loop says that until `lPtr` is less than `rPtr` the loop will continue, which ensures that we don't have two pointers on the same value.

Next we define the values of `lPtr` and `rPtr` as `l` and `r` respectively. They are the values of `copy`. The `ans` is the sum of `l` and `r`.

Next we check if the `ans` (the sum) is the target or not.
If it is, then we get the index of `l` as `lIdx`. It is the real index of `l` from `nums`. 

Ofcourse we will then return the `lIdx` as well as the index of `r` in `nums`. But we need to check if `l` and `r` and not the same number otherwise they will both be indexed similarly. 

For that we do the indexing from `lIdx + 1` so they are not identical. We only do that when they both are same else we start it from 0.

We then increase `lPtr` if the `ans` is less than the `target` otherwise we decrease the `rPtr` as the `copy` is sorted, increasing or decreasing the pointers can increase or decrease the `ans` respectively.

# Complexity
- Time complexity: `O(n log n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 72.11%*

# Code
```Python
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        lPtr = 0
        rPtr = len(nums)-1
        copy = sorted(nums)
        while lPtr < rPtr:
            l = copy[lPtr]
            r = copy[rPtr]
            ans = l + r
            if ans == target: 
                lIdx = nums.index(l)
                return [
                    lIdx, 
                    nums.index(r, 0 if l != r else (lIdx + 1))
                ]
            if ans > target: rPtr -= 1
            if ans < target: lPtr += 1
```

# Proof
![0ms | Beats 100.00% ; 18.59MB Beats 72.11%](https://assets.leetcode.com/users/images/8039adda-66a8-4097-992c-afaad11a41fa_1742402394.1157808.png)

# Support
If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/two-sum/solutions/6556443/solution-for-two-sum-in-python-with-two-davfo/).