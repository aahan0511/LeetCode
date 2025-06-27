# Intuition
This was a straightforward problem with no detailed solution.

# Approach
We use `pandas` as `pd` by importing it. Then we just use the `shape` member of the `Dataframe` which gives the 2 dimensions of a `Dataframe`, which is what we want, but as the `.shape` is a tuple, we convert it to a `list()`.

# Complexity
- Time complexity: `O(1)`| *Beats 81.04%*
- Space complexity: `O(1)`| *Beats 73.23%*

# Code
```Python
import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> list[int]:
    return list(players.shape)
```

# Proof

![349ms | Beats 81.04% ; 65.57MB Beats 73.23%](https://assets.leetcode.com/users/images/d1909e20-d4f6-4098-9d96-266623c6f2c9_1742448350.8981142.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/get-the-size-of-a-dataframe/solutions/6558039/solution-for-size-of-dataframe-in-python-bud8/).
