class Solution:
    def isValid(self, s: str) -> bool:
        openers = ["(", "[", "{"]
        closers = [")", "]", "}"]
        stack = []
        for char in s:
            if char in openers:
                stack.append(char)
            else:
                if not stack: return False
                if stack[-1] != openers[closers.index(char)]: return False
                stack.pop(-1)
        return True
    
# https://leetcode.com/problems/valid-parentheses/solutions/6570936/solution-for-valid-parentheses-in-python-jg0q/