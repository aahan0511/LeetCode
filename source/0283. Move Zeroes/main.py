class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        lPtr = 0
        rPtr = 0
        length = len(nums)
        while rPtr < length:
            if nums[rPtr]:
                nums[rPtr], nums[lPtr] = nums[lPtr], nums[rPtr]
                lPtr += 1
            rPtr += 1   

# https://leetcode.com/problems/move-zeroes/solutions/6581854/solution-for-move-zeroes-in-python-using-w40w/