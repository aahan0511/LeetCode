# Intuition

I have basically first sorted the `dictionary` based on their length, and then checked if the `word` is a _subsequence_ of `s`. 

# Approach

I have used `std:string`, `std:algorithm` and `std:vector`.

First I `sort` the `dictionary` based on first their length (`.size()`) and then if two strings have equal length, I order them using normal lexicographical order.
This was we only check the words in the order they need to be checked.

Now we go through each `word` in `dictionary`.
We have to now check if `word` is a subsequence of `s`. To do this we  remember the last time we saw a character (`c`) of `word` in `s`. And every time we will check for the next character after the index of the previous order, so we know the relative order is the same.

And if the character is not there / not in the correct order, we will set `last_char_idx` to `-1`, and we will break the loop. Setting it to `-1` is important as otherwise we would not be able to know if the loop finished normally and the word is valid, or did it finish by `break`.

If `last_char_idx` is not `-1`, meaning the `word` is valid, we return it. Otherwise continue with the next `word`.

# Complexity

- Time complexity: `O(N*M*Log(M))` | **1ms** | *Beats 98.04%*
- Space complexity: `O(M)` | **20.04MB** | *Beats 60.55%*

# Code

```cpp []
#include <string>
#include <algorithm>
#include <vector>
using namespace  std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(
            dictionary.begin(), 
            dictionary.end(), 
            [] (string &a, string &b) {
                const int sizeA = a.size();
                const int sizeB = b.size();
                if (sizeA != sizeB) 
                    return sizeA > sizeB;
                return a < b;
            }
        );
        
        for (string &word : dictionary) {
            int last_char_idx = 0;
            for (char &c : word) {
                auto pos = s.find(c, last_char_idx);
                if (pos == string::npos) {
                    last_char_idx = -1;
                    break;
                }
                last_char_idx = pos;
            }
            if (last_char_idx != -1)
                return word;
        }
        
        return "";
    }
};
```

# Proof

[![1ms | Beats 98.04% ; 20.04MB | Beats 60.55%](https://assets.leetcode.com/users/images/2dfe37c6-9efd-4bb7-b8f8-078222556d60_1765618419.9484167.png)](https://leetcode.com/submissions/detail/1854384146/)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/solutions/7410656/simple-c-solution-by-aahan0511-1zig/).
