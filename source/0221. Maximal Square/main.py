class Solution:
    def maximalSquare(self, matrix: list[list[str]]) -> int:
        m = len(matrix)
        n = len(matrix[0])

        for row in range(m):
            for col in range(n):
                matrix[row][col] = int(matrix[row][col])  # type: ignore

        if m == 1 or n == 1:
            return max(max(matrix, key=sum))  # type: ignore

        dp_matrix = [matrix[_].copy() for _ in range(m)]
        dp_max = 0

        for row in range(1, m):
            for col in range(1, n):
                curr = dp_matrix[row][col]
                square = [
                    dp_matrix[row - 1][col - 1],
                    dp_matrix[row - 1][col],
                    dp_matrix[row][col - 1],
                ]
                mini = -1
                if curr == 1:
                    mini = min(square)
                    if mini > 0:  # type: ignore
                        dp_matrix[row][col] = mini + 1  # type: ignore
                dp_max = max(dp_max, mini + 1, curr, max(square))  # type: ignore

        return dp_max**2  # type: ignore
