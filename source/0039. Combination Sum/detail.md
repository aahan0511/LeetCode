# Intuition
I have used a recursive approach with caching. The caching helps reduce time taken and recursive approach was the only one I could think of.

# Approach

Lets ignore the `cache` for the explanation as it is just a improvement rather than a required addition.

So in the code we first check, if the `target` is `0`, we return a empty `vector` as no combination will be there.

Then we initialize a variable `paths` which will hold the combinations. It is a `set` as we don't want duplicate entries.

Then in the loop we go through each `candidate` in `candidates`.

if the `target` is the same as the `candidate`, we add a `vector` with only `candidate` inside it to the `paths`. This is because in `paths` we add every `path` which sums up to `target`.

Then if `target` is greater than `candidate`.
We do recursion to find out the paths for the remaining `target`. When the `can_paths` come, we first check if the `sum` of the `can_path` is equal to the `target - candidate`, if it is not, it means the `can_path` is invalid, so we `continue` and skip the iteration. 

Then we add the `candidate` to the `can_path` and after this we `sort` it. Sorting it helps remove every duplicate (for example `{1, 2, 4}` and `{1, 4, 2}`, will be considered different, but when we sort them they become the same, removing duplicates). Finally we inser them to the `paths`.

Finally we cast the `set` to a `vector` and return it.

# Complexity

- Time complexity: `O(n ^ target)`
- Space complexity: `O(target)`

# Code
```cpp []
class Solution {
    map<int, vector<vector<int>>> cache;

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if (target <= 0) {
            return {};
        }

        vector<vector<int>> cache_entry = cache[target];
        if (cache_entry.size() > 0) {
            return cache_entry;
        }

        set<vector<int>> paths;
        for (int candidate : candidates) {
            if (target == candidate) {
                paths.insert({candidate});
            } else if (target > candidate) {
                vector<vector<int>> can_paths =
                    combinationSum(candidates, target - candidate);

                for (vector<int> can_path : can_paths) {
                    if (accumulate(can_path.begin(), can_path.end(),
                                   candidate) != target)
                        continue;
                    vector<int> path = {candidate};
                    path.insert(path.end(), can_path.begin(), can_path.end());
                    sort(path.begin(), path.end());
                    paths.insert(path);
                }
            }
        }

        vector<vector<int>> answer(paths.begin(), paths.end());
        cache[target] = answer;
        return answer;
    }
};
```

# Proof
[![32ms | Beats 17.50% ; 24.40MB Beats 17.30%](https://assets.leetcode.com/users/images/cf12877c-0ff4-4108-82ab-2cba4beba555_1760195050.508638.png)](https://leetcode.com/submissions/detail/1798385175/)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/combination-sum/solutions/7267005/solution-for-combination-sum-with-recurs-4cwh/).