class Solution:
    def arraySign(self, nums: list[int]) -> int:
        if 0 in nums: return 0
        sign = 1
        for num in nums:
            if num < 0: sign = -sign
        return sign
    
# https://leetcode.com/problems/sign-of-the-product-of-an-array/solutions/6582511/solution-for-sign-of-product-of-an-array-in-python-using-math/