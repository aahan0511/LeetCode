class Solution:
    def isMonotonic(self, nums: list[int]) -> bool:
        if len(nums) == 1: return True
        increase = None
        idx = 0
        length = len(nums) - 1
        while idx < length:
            if nums[idx] == nums[idx+1]: 
                idx += 1
                continue
            statement = True if nums[idx] < nums[idx+1] else False
            if increase is None: increase = statement
            elif increase != statement: return False
            idx += 1
        return True
    
# https://leetcode.com/problems/monotonic-array/solutions/6590225/solution-for-monotonic-array-in-python-b-hwb8/