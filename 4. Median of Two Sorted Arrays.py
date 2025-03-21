class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merged = sorted(nums1 + nums2)
        length = len(merged)
        mid = length // 2
        return merged[mid] if length % 2 else ( merged[mid-1] + merged[mid] ) / 2
    
# https://leetcode.com/problems/median-of-two-sorted-arrays/solutions/6558126/solution-for-median-of-sorted-arrays-in-wbhr4/