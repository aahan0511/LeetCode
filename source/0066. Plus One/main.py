class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        remainder = 1
        idx = -1
        length = - len(digits)
        while idx >= length and remainder != 0:
            digit = digits[idx] + remainder
            remainder = digit // 10
            digits[idx] = digit % 10
            idx -= 1
        if remainder: digits.insert(0, remainder)
        del idx, remainder, digit
        return digits
    
# https://leetcode.com/problems/plus-one/solutions/6582466/solution-for-plus-one-in-python-by-aahan-9qke/