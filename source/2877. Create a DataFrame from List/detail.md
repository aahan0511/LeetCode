# Intuition
This was a straightforward problem with no detailed solution.

# Approach
We use `pandas` as `pd` by importing it. Then we create a `Dataframe` provided by `pd` to create a table or a `Dataframe` out of the `student_data` with the `columns` parameter set to being `["student_id", "age"]`, `pandas` takes these column names and sets them to the data provied to give a `pd.Dataframe`.

# Complexity
- Time complexity: `O(n)` | *Beats 88.44%*
- Space complexity: `O(n)` | *Beats 70.85%*

# Code
```Python
import pandas as pd

def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    return pd.DataFrame(
        student_data, 
        columns=["student_id", "age"]
    )
```

# Proof

![288ms | Beats 88.44% ; 65.26MB Beats 70.85%](https://assets.leetcode.com/users/images/71500961-bbe7-46ef-80df-2b98906835de_1742447871.1368918.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/create-a-dataframe-from-list/solutions/6558013/solution-for-dataframe-from-list-in-pyth-r6jt/).
