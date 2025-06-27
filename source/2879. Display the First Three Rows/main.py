import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees[:3]

# https://leetcode.com/problems/display-the-first-three-rows/solutions/6558157/solution-for-first-three-rows-in-python-using-pandas/