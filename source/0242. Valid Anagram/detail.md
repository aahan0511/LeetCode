# Intuition
This was a really straightforward problem, but having different approaches. More about my approach in [Approach](#Approach).

# Approach
First we import `Counter` from `typing`; a python in-built library; and then in the solution we just check if the `Counter`s of both `t` and `s` are equal they are _anagrams_. A `Counter` just holds the count of each item in a sequence.

# Complexity
- Time complexity: `O(n)` | *Beats 91.81%*
- Space complexity: `O(n)` | *Beats 64.57%*

# Code
```Python
from typing import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)
```

# Proof

![6ms | Beats 91.81% ; 17.86MB Beats 64.57%](https://assets.leetcode.com/users/images/445a8303-8415-4c3e-9989-e3a977363265_1742985580.593729.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/valid-anagram/solutions/6581559/solution-for-valid-anagram-in-python-usi-95le/).
