class Solution:
    def romanToInt(self, s: str) -> int:
        values = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        number = 0
        for idx, char in enumerate(s[:-1]):
            value = values[char]
            if values[s[idx+1]] > value:
                number -= value
            else:
                number += value
        return number+values[s[-1]]
    
# https://leetcode.com/problems/roman-to-integer/solutions/6561845/solution-for-roman-to-integer-in-python-5akpy/