import pandas as pd

def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    return pd.DataFrame(
        student_data, 
        columns=["student_id", "age"]
    )

# https://leetcode.com/problems/create-a-dataframe-from-list/solutions/6558013/solution-for-dataframe-from-list-in-pyth-r6jt/