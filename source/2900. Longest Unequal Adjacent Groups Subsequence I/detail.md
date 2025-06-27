# Intuition
This was a _simple_ problem with a _horrible_ description. I maintained a variable named `flipper` to keep track of what I need to get. More about it in the [Approach](#Approach).

# Approach
First I initialized a variable `flipper` which is set to the first `bit` in `groups`. Now we also create a list `words_` (**note** the underscore otherwise the variable names will clash) which contains the first word from `words`.

Now we create a `idx` which will help in iterating through `groups` with a `while` loop.
Inside the loop we check if the `bit` at the `idx` in `groups` is same as our `flipper` we _flip_ the `flipper` by setting it to `not` `flipper` and append the word at `idx` in `words` to `words_`. This part is a little tricky.

Finally we increase the `idx` to see the next `bit` and word.

And there we go, our `words_` is filled with the _**Longest Unequal Adjacent Groups Subsequence**_.

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 65.57%*

# Code
```Python
class Solution:
    def getLongestSubsequence(self, words: list[str], groups: list[int]) -> list[str]:
        flipper = groups[0]
        words_ = [words[0]]

        idx = 0
        while idx < len(groups):
            if groups[idx] != flipper:
                flipper = int(not flipper)
                words_.append(words[idx])
            idx += 1
        
        return words_
```

# Proof

![0ms | Beats 100.00% ; 17.80MB Beats 65.57%](https://assets.leetcode.com/users/images/120276af-f3b7-437f-871c-e84147d10fbd_1747292853.933101.png)

# Support

If you liked this explanation and solution please **`upvote`** on [leetcode](https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/solutions/6746086/solution-for-longest-unequal-subsequence-elp0/).