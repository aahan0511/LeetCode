class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip(" ")
        if s == "": return 0
        number = "-" if s[0] == "-" else ""
        for char in s[(1 if s[0] in "+-" else 0):]:
            if char.isdigit(): number += char
            else: break
        return 0 if number in ["", "-"] else min(2147483647, max(-2147483648, int(number)))
    
# https://leetcode.com/problems/string-to-integer-atoi/solutions/6558918/solution-for-string-to-integer-in-python-ux5i/