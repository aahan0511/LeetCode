class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        length = len(s)
        cntr = length // 2 + 1
        while cntr > 1:
            cntr -= 1
            if length % cntr: 
                continue
            if s[:cntr] * (length // cntr) == s:
                return True
        return False
    
# https://leetcode.com/problems/repeated-substring-pattern/solutions/6581752/solution-for-repeated-substring-pattern-ygsrs/