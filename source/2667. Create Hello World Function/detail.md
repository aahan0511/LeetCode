# Intuition
This was a function with only one line answer. No need to explain.

# Approach
We just return `"Hello World"` inside of the function LeetCode made. This just returns `"Hello World"`.

# Complexity
- Time complexity: `O(1)` | *Beats 94.49%*
- Space complexity: `O(1)` | *Beats 47.81%*

# Code
```javascript []
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        return "Hello World"
    }
};
```

# Proof

![33ms | Beats 94.49% ; 53.00MB Beats 47.81%](https://assets.leetcode.com/users/images/5e7acf49-4829-4e5d-9de3-dfb32e533428_1742991120.3354113.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/create-hello-world-function/solutions/6581876/solution-for-create-hello-world-function-hx5o/).