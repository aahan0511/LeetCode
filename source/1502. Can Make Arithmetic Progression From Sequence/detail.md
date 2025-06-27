# Intuition
This was a really easy problem with an easy approach. More about it in [Approach](#Approach).

# Approach
First we sort `arr` using `arr.sort()`. This way it is easier to check for an arithmetic progression.
Now we define the index (`idx`) as `1`, as we already checked the difference for the first two elements in `arr`. Next we find the the `length` of `arr`. This way we don't have to compute it forever.

We now find the difference (`diff`) between the first two indices as I said before. This is the standard and if any other difference is different we return `False`.

The `while` loop does what I said. It runs until the `idx` has reached the second last index and checks if it is not the same as our `diff` we return `False`; otherwise we increase `idx` by `1`.

The `del` is just a nice habit as it saves memory and frees up space from unused variables.
Finally we return `True` if there were no deviations.

# Complexity
- Time complexity: `O(n log n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 84.42%*

# Code
```Python
class Solution:
    def canMakeArithmeticProgression(self, arr: list[int]) -> bool:
        arr.sort()
        idx = 1
        length = len(arr)
        diff = arr[1] - arr[0]
        while idx < length-1:
            if arr[idx+1] - arr[idx] != diff: return False
            idx += 1
        del idx, length, diff
        return True
```

# Proof

![0ms | Beats 100.00% ; 17.77MB Beats 84.42%](https://assets.leetcode.com/users/images/4cd8baad-2916-4178-b82c-971bc1073b9a_1743174465.4884715.png)

# Support

If you liked this explanation and solution please **`upvote`** on [`leetcode`](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/solutions/6590083/solution-for-can-make-arithmetic-progres-qj7q/).