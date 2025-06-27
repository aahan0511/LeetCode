class Solution:
    def maxSum(self, grid: list[list[int]]) -> int:
        max_sum = 0

        for row in range(len(grid) - 2):
            for column in range(len(grid[0]) - 2):
                max_sum = max(
                    max_sum, 
                    grid[row][column] + grid[row][column + 1] + grid[row][column + 2]    
                    + grid[row+1][column+1] 
                    + grid[row+2][column] + grid[row+2][column + 1] + grid[row+2][column + 2]  
                )

        return max_sum

# https://leetcode.com/problems/maximum-sum-of-an-hourglass/solutions/6891667/solution-for-maximum-sum-of-hourglass-in-yso7/