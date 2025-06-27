class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        return len(s.strip().split(" ")[-1])
    
# https://leetcode.com/problems/length-of-last-word/solutions/6585778/solution-for-length-of-last-word-in-pyth-u2dw/