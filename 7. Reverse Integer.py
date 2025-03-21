class Solution:
    def reverse(self, x: int) -> int:
        negative = x < 0
        reverse = int(str(abs(x))[::-1])
        if negative: reverse = -reverse
        return reverse if 2147483648 > reverse > -2147483649 else 0
    
# https://leetcode.com/problems/reverse-integer/solutions/6558380/solution-for-reverse-integer-in-python-using-strings/