# Intuition
This was a straightforward problem with no detailed solution.

# Approach
We use `pandas` as `pd` by importing it. Using slicing we get the first three rows, `[:3]`.

# Complexity
- Time complexity: `O(1)` | *Beats 64.16%*
- Space complexity: `O(1)` | *Beats 24.79%*

# Code
```Python
import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees[:3]
```

# Proof

![414ms | Beats 64.16% ; 65.90MB Beats 24.79%](https://assets.leetcode.com/users/images/8a50153c-70b2-4ae2-b673-21e173be79ee_1742450619.5270305.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/display-the-first-three-rows/solutions/6558157/solution-for-first-three-rows-in-python-2ngec/).
