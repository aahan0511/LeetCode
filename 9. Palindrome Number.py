class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        return x == x[::-1]
    
# https://leetcode.com/problems/palindrome-number/solutions/6561735/solution-for-palindrome-number-in-python-d4fq/