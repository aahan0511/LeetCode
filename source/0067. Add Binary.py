class Solution:
    def addBinary(self, a: str, b: str) -> str:
        return bin(int(a, 2) + int(b, 2))[2:]
    
# https://leetcode.com/problems/add-binary/solutions/6577732/solution-for-add-binary-in-python-using-ic3hn/