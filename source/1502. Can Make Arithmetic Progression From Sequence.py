class Solution:
    def canMakeArithmeticProgression(self, arr: list[int]) -> bool:
        arr.sort()
        idx = 1
        length = len(arr)
        diff = arr[1] - arr[0]
        while idx < length-1:
            if arr[idx+1] - arr[idx] != diff: return False
            idx += 1
        del idx, length, diff
        return True

# https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/solutions/6590083/solution-for-can-make-arithmetic-progres-qj7q/