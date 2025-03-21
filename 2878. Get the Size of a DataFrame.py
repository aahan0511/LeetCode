import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> list[int]:
    return list(players.shape)

# https://leetcode.com/problems/get-the-size-of-a-dataframe/solutions/6558039/solution-for-size-of-dataframe-in-python-using-pandas/