import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students.loc[students["student_id"] == 101, ["name", "age"]]

# https://leetcode.com/problems/select-data/solutions/6569819/solution-for-select-data-in-python-using-61px/