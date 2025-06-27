# Intuition
The first approach I thought of using was Brutefore (and that's what I used 😅) so more about my approach below!

# Approach
It is a really easy problem, so first I initiallized a variable which would hold the `max_sum` we get after the iterations. Currently it is set to `0` which will be updated soon.

Now we create two variables `m` and `n` which are the _width_ and _height_ of the matrix respectively.

Now comes the loop. In the `range` we have put `m-2` and `n-2` because we only want to iterate the _top-left-most cell_ of every **3x3 matrix** in `grid`. Now as it is **3x3** we just need to first one so we can remove the other two, that's why `m-2` and `n-2`.
> NOTE: By saying we only need the first cell means, we only need it for iterating, by this single cell's index we can get the entire **3x3 matrix**.

Next we get the `row`'s index and the `column`'s index in the nested loop. we can say that let `max_sum` be the maximum `max` of the sum of our current hourglass shape, and the previous `max_sum`.

You might think that,
```
grid[row][column] + grid[row][column + 1] + grid[row][column + 2]    
+ grid[row+1][column+1] 
+ grid[row+2][column] + grid[row+2][column + 1] + grid[row+2][column + 2]  
```
is really complicated but its very simple and nicely formatted. _The first line makes the top row_ of the hourglass, _the middle line makes the single box_ and _the bottom line makes the lower line_.

Finally we delete (`del`) the unused variables to save space and `return max_sum`.

# Complexity

- Time complexity: `O(m * n)` | *Beats 90.50%*
- Space complexity: `O(1)` | *Beats 22.35%*

# Code
```Python
class Solution:
    def maxSum(self, grid: list[list[int]]) -> int:
        max_sum = 0
        m = len(grid)
        n = len(grid[0])

        for row in range(m-2):
            for column in range(n-2):
                max_sum = max(
                    max_sum, 
                    grid[row][column] + grid[row][column + 1] + grid[row][column + 2]    
                    + grid[row+1][column+1] 
                    + grid[row+2][column] + grid[row+2][column + 1] + grid[row+2][column + 2]  
                )

        del m, n, row, column

        return max_sum
```

# Proof
[![28ms | Beats 90.50% ; 20.28MB Beats 22.35%](https://assets.leetcode.com/users/images/cd6646c0-d941-4d86-b9e9-043df628b436_1751018465.3646247.png)](https://leetcode.com/submissions/detail/1677220530/)

# Support

If you liked this explanation and solution please **`upvote`** on [leetcode](https://leetcode.com/problems/maximum-sum-of-an-hourglass/solutions/6891667/solution-for-maximum-sum-of-hourglass-in-yso7/).