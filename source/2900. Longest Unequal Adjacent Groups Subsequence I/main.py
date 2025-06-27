class Solution:
    def getLongestSubsequence(self, words: list[str], groups: list[int]) -> list[str]:
        flipper = groups[0]
        words_ = [words[0]]

        idx = 0
        while idx < len(groups):
            if groups[idx] != flipper:
                flipper = int(not flipper)
                words_.append(words[idx])
            idx += 1
        
        return words_
    
# https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/solutions/6746086/solution-for-longest-unequal-subsequence-elp0/