# Intuition

This was a simple problem with a twist of math. We know that the sum of the array when complete will be equal to the sum of numbers till the size of array.

# Approach

First we find out the `size` of the array `nums`.
Using that size we get the sum of all numbers till `size` with the formula $\frac{n (n + 1)}{2}$.

We know that the sum of array will be equal to the sum of numbers till `size`, we just keep subtracting `num` from `missing`, and finally all that's left is the actual missing number.

We just return `missing`.

# Complexity

- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 69.98%*

# Code

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int missing = (size * (size + 1)) / 2;
        for (int num : nums) {
            missing -= num;
        }
        return missing;
    }
};
```

# Proof

[![0ms | Beats 100.00% ; 21.76MB Beats 69.98%](https://assets.leetcode.com/users/images/829d389c-583a-4e11-8b93-18ed1e05faa5_1760018370.9600904.png)](https://leetcode.com/submissions/detail/1796393188/)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/missing-number/solutions/7261786/solution-for-missing-number-in-c-by-aaha-b3ci/).