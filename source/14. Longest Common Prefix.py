class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        minStr = min(strs, key=len)
        common = ""
        for idx, char in enumerate(minStr):
            if all(True if Str[idx] == char else False for Str in strs): common += char
            else: break
        return common
    
# https://leetcode.com/problems/longest-common-prefix/solutions/6561989/solution-for-longest-common-prefix-in-py-tytp/