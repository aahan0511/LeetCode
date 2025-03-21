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
                    nums.index(r, 0 if l != r else (lIdx+1))
                ]
            if ans > target: rPtr -= 1
            if ans < target: lPtr += 1

# https://leetcode.com/problems/two-sum/solutions/6556443/solution-for-two-sum-in-python-with-two-davfo/ 