# Intuition
This problem has two approaches to solving it. First we can either use a `for` loop or we can use a `while` loop each having their own ways. More about them below.

# Approach 1
First we create  a `merged`, which will hold the merged strings.
Next we `zip` them and loop through the `zip` using `one` and `two`.

We just add `one` and `two` to the `merged` as all three of them are strings.

We then figure out that the number of letters used from each word is `len(merged)//2`, which is the cut.
Instead of finding the longer string, we just add the `[cut:]` from both of the words.

## Complexity
- Time complexity: `O(n + m)` | *Beats 97.25%*
- Space complexity: `O(n + m)` | *Beats 73.87%*

# Approach 2
First we create  a `merged`, which will hold the merged strings.
Then we create a length, which is the `len` of the shorter string.
And we also need to find out the `longer` which is the longer string.

Now we have initialized a `idx` at 0.

While `idx` is less than `length`, we add the characters of `word1` and `word2` at `idx` tp `merged` and increase `idx` by `1`.

We then just have to return the `merged` concatenated with the part which was left out by the `length`.

## Complexity
- Time complexity: `O(n + m)` | *Beats 72.26%*
- Space complexity: `O(n + m)` | *Beats 73.87%*

# Codes
```Python
# Approach 1

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged = ""
        for one, two in zip(word1, word2):
            merged += one + two
        cut = len(merged)//2
        return merged + word1[cut:] + word2[cut:]
```
```Python
# Approach 2

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged = ""
        length = min(len(word1), len(word2))
        longer = max(word1, word2, key=len)
        idx = 0
        while idx < length:
            merged += word1[idx] + word2[idx]
            idx += 1
        return merged + longer[idx:]
```

# Proofs

## Approach 1

![28ms | Beats 97.25% ; 17.61MB Beats 73.87%](https://assets.leetcode.com/users/images/80b41b94-9f6d-4d50-85f3-9bf4937317f0_1742902605.79444.png)

## Approach 2

![36ms | Beats 72.26% ; 17.67MB Beats 73.87%](https://assets.leetcode.com/users/images/2e3993d0-34af-40f6-82a4-021d2809cd20_1742902637.1713815.png)

# Support

If you liked these explanations and solutions please **`upvote`** on [LeetCode](https://leetcode.com/problems/merge-strings-alternately/solutions/6577845/2-approaches-for-merge-strings-alternate-pl1y/).
