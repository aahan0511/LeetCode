# Intuition
This was a straightforward problem that required us to simulate the rules of the Game of Life. I used a `reference` board to keep track of the original board, while putting the changes in the original board itself. More about my approach below.

# Approach 
There are two functions in `class Solution` one is the main _LeetCode function_ (`gameOfLife`), and the other is the function _I made_ that helps me to get the neighbors (`getNeighbors`).

First let me explain how to `getNeighbors` function works.
The `getting` list is just a list that contains all the coordinates that we need to check for alive neighbors, the coordinates are relative to the `row` and `col` provided in the parameters.

Now we dont need to say **where** are the _living neighbors_, we just need the **number** of _living neighbors_. So we keep a count by `neighbors`.

Now we go through each `cords` in `getting` and see if the `cords` are not out of bound (the _row_ of the `cords` is less and `self.m` and more than or equal to `0`, and the _column_ in the `cords` is less than `self.n` and more than or equal to `0`) we can count that as a neighbor.
But we only count it as a `neighbor` when the neighbor is living, and if it is living it is `1` so we just say add whatever is the value on that `cords` on `self.reference` (copy of the board).

Finally in the function we delete (`del`) `getting` as it is a waste of memory to keep it, and we return `neighbors`.

But this was just the function to `getNeighbors`, now comes the real code;

We first define the `self.m` and `self.n` so that we can access the width and the height of the board at any point in time. We also creat a copy of the board (`reference`) so that we can access it anywhere in the class as well as we can refer to the `reference` board making changes in the original. Now in the loop, we go through each `row` and `col` in the `board` and get the neighbors for that particular cell. Now we can apply the rules.

![image.png](https://assets.leetcode.com/users/images/7f0cbed4-c9d5-4b02-b9ce-3ece36db62d6_1751183312.5358958.png)


If the cell is living (`self.reference[row][col]`) the value is `1` which gives us a true and enters the `if` statement. In the `if` statement we say if the `neighbors` are less than two, make the value on the `board` 0; even if the `neighbors` are more than three, make the value on the `board` 0.

Now if the cell is dead, the `else` statement says that if the `neighbours` are exactly three, we can make it alive.

And we dont need to return anything, we just delete (`del`) the useless variables to save space.

# Complexity
- Time complexity: `O(m * n)` | *Beats 100.00%*
- Space complexity: `O(m * n)` | *Beats 94.41%*

# Code
```python
class Solution:
    def gameOfLife(self, board: list[list[int]]) -> None:
        self.m = len(board)
        self.n = len(board[0])

        self.reference = [board[i].copy() for i in range(self.m)]

        for row in range(self.m):
            for col in range(self.n):
                neighbors = self.getNeighbors(row, col)
                if self.reference[row][col]:
                    if neighbors < 2: board[row][col] = 0
                    elif neighbors > 3: board[row][col] = 0
                else:
                    if neighbors == 3: board[row][col] = 1

        del self.reference, self.n, self.m

    def getNeighbors(self, row: int, col: int) -> int:
        getting = [
            [row-1, col-1], [row-1, col], [row-1, col+1],
            [row, col-1]  ,                  [row, col+1],
            [row+1, col-1], [row+1, col], [row+1, col+1]
        ]

        neighbors = 0
        for cords in getting:
            if cords[0] < self.m and cords[0] >= 0 and cords[1] < self.n and cords[1] >= 0:
                neighbors += self.reference[cords[0]][cords[1]]

        del getting

        return neighbors
```

# Proof

[![0ms | Beats 100.00% ; 17.70MB Beats 94.41%](https://assets.leetcode.com/users/images/c8c64660-2573-4005-9c6d-645867345ec5_1751089827.6263232.png)](https://leetcode.com/submissions/detail/1678933293/)


# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/game-of-life/solutions/6898223/solution-for-game-of-life-in-python-by-a-iv8r/).