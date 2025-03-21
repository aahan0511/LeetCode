class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        nums = sorted(nums, key=abs)
        new = []
        for num in nums:
            new.append(num**2)
        return new
    
# https://leetcode.com/problems/squares-of-a-sorted-array/solutions/6561693/solution-for-squares-of-array-using-pyth-8332/