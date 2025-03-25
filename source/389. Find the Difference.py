class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        setT = set(t)
        for char in setT:
            if t.count(char) > s.count(char):
                return char
            
# https://leetcode.com/problems/find-the-difference/solutions/6577887/solution-for-find-difference-in-python-u-j9bs/