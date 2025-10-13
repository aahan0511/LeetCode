# Intuition
I basically just did what the question asked to do. There was no algorithm or logic required.

# Approach

First I used the smallest of the datatypes I could use. I used the `unsigned short int` for the `score` as it would never exceed its limit. The same for `cur_c`, `next_c` and `idx`. Even though `char` is for characters, we can use it to represent small numbers.

The above was merely just optimization, for the main code, the logic was simple.

First we iterate through all indexes till the second last index as `idx`. We don't do the last index as it doesn't have a adjacent character.

Then we set the current character's ascii which is `cur_c` to the value of `idx` in `s`. For `next_c` we set the ascii of the next character which is `idx + 1`. Then we add the difference of `cur_c` and `next_c` to `score`.

Finally we return `score`. 

# Complexity

- Time complexity: `O(N)` | *Beats 100.00%* | **0ms**
- Space complexity: `O(1)` | *Beats 89.41%* | **8.78MB**

# Code

```cpp []
class Solution {
public:
    int scoreOfString(string s) {
        unsigned short int score = 0;
        unsigned char cur_c;
        unsigned char next_c;
        unsigned char idx;
        for (idx = 0; idx < s.size() - 1; idx++) {
            cur_c = s[idx];
            next_c = s[idx+1];
            score += abs(cur_c - next_c);
        }

        return score;
    }
};
```

# Proof

[![0ms | Beats 100.00% ; 8.78MB Beats 89.41%](https://assets.leetcode.com/users/images/8425038b-a6a4-4ad6-9c25-6a6e9116c332_1760371485.7034304.png)](https://leetcode.com/submissions/detail/1800478519/)


# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/score-of-a-string/solutions/7272408/solution-for-score-of-a-string-in-c-by-a-mfju/).