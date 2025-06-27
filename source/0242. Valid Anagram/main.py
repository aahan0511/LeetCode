from typing import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)
    
# https://leetcode.com/problems/valid-anagram/solutions/6581559/solution-for-valid-anagram-in-python-usi-95le/