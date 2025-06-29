class Solution:
    def gameOfLife(self, board: list[list[int]]) -> None:
        self.m = len(board)
        self.n = len(board[0])

        self.reference = [board[i].copy() for i in range(self.m)]

        for row in range(self.m):
            for col in range(self.n):
                neighbors = self.getNeighbors(row, col)
                if self.reference[row][col]:
                    if neighbors < 2:
                        board[row][col] = 0
                    elif neighbors > 3:
                        board[row][col] = 0
                else:
                    if neighbors == 3:
                        board[row][col] = 1

        del self.reference, self.n, self.m

    def getNeighbors(self, row: int, col: int) -> int:
        getting = [
            [row - 1, col - 1],
            [row - 1, col],
            [row - 1, col + 1],
            [row, col - 1],
            [row, col + 1],
            [row + 1, col - 1],
            [row + 1, col],
            [row + 1, col + 1],
        ]

        neighbors = 0
        for cords in getting:
            if (
                cords[0] < self.m
                and cords[0] >= 0
                and cords[1] < self.n
                and cords[1] >= 0
            ):
                neighbors += self.reference[cords[0]][cords[1]]

        del getting

        return neighbors
