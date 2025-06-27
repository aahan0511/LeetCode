# Intuition
This was a problem based on the inbuilt functions of a DataFrame. More on that in [Approach](#Approach).

# Approach
We use the `loc` method on the `students` DataFrame where we specify that the `student["student_id"] == 101`, which means `student_id` is `101` and we return the `name` and the `age`, `["name", "age"]`.

# Complexity
- Time complexity: `O(n)` | *Beats 91.22%*
- Space complexity: `O(1)` | *Beats 11.53%*

# Code
```Python
import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students.loc[students["student_id"] == 101, ["name", "age"]]
```

# Proof

![307ms | Beats 91.22% ; 66.78MB Beats 11.53%](https://assets.leetcode.com/users/images/c7889b3e-ce52-43bc-834b-e241710d1bb2_1742723130.0072541.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/select-data/solutions/6569819/solution-for-select-data-in-python-using-61px/).
