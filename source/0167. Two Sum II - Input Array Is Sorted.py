class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        l, r = 1, len(nums)
        while l < r:
            ans = nums[l-1] + nums[r-1]
            if ans == target:
                return [l, r]
            if ans > target: r -= 1
            if ans < target: l += 1

# https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/solutions/6556522/solution-for-two-sum-ii-in-python-with-t-3ozl/