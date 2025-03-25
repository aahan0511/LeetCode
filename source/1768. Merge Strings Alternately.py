class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged = ""
        for one, two in zip(word1, word2):
            merged += one + two
        cut = len(merged)//2
        return merged + word1[cut:] + word2[cut:]
    
# https://leetcode.com/problems/merge-strings-alternately/solutions/6577845/2-approaches-for-merge-strings-alternate-pl1y/