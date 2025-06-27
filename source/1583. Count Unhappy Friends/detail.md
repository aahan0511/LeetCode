# Intuition
This was a nice problem requiring you to think like a code yourself. My approach uses a cache that stores the preferences so that I dont need to check the list again and again. Check out my Approach to see what I did.

# Approach
First I create a `cache` that holds the preferences that are liked more than their current partner. This cache is filled in the upcoming loop.

Now we go in `pairs` looking through each `pair`. We use another loop which is just a automatic switch for `0` and `1` for each pair so that we can nicely check the people in each pair.

Suppose we are on `1`. It will set the current `person` to our side which is `1` now, and assign a variable `friend` to the other side, `0`.

Now we get the person's preferences as `personal_preferences` so that, again, we dont have to repeatedly check for something.

Now it's the important part, we need to add the `person`'s friends who he prefers more than his current partner (`friend`). We do this by getting the index of `friend` in the `personal_preferences` and we get all the previos items in the `personal_preferences` who are his _more preferred friends_.

As we had already initiallized `cache` with `n` number for empty lists, we add the _more preferred friends_ to the `cache` at the `person`'s index.

In the next loop we first make a count of how many `unhappy` friends are there, which is set to `0`.

In the loop we go through cache with the `cache_no` as the index and check each _more preferred friend_ in the `cache`. For each friend we check if the `cache_no` (current person's index) is there in the other person's cache.

If it is there we add `1` to `unhappy` and break the loop.

Now because we went through every `pair` once, our cache is filled with preferences, that's why its so easy to find a match.

Finally we delete `cache` so that there is less burden on our memory and return `unhappy`.

# Complexity
- Time complexity: `O(n ^ 2)` | *Beats 98.18%*
- Space complexity: `O(n ^ 2)` | *Beats 82.73%*

# Code
```Python
class Solution:
    def unhappyFriends(self, n: int, preferences: list[list[int]], pairs: list[list[int]]) -> int:
        cache = [[] for i in range(n)]

        for pair in pairs:
            for pair_side in range(2):
                person = pair[pair_side]
                friend = pair[int(not pair_side)]

                personal_preferences = preferences[person]
                cache[person] += personal_preferences[:personal_preferences.index(friend)]
        
        unhappy = 0
        for cache_no in range(n):
            for priority in cache[cache_no]:
                if cache_no in cache[priority]:
                    unhappy += 1
                    break

        del cache

        return unhappy
```

# Proof

[![1ms | Beats 98.18% ; 30.12MB Beats 82.73%](https://assets.leetcode.com/users/images/653b641e-bfb3-4ae9-bbaa-5fb7655b76f0_1750938245.7924757.png)](https://leetcode.com/submissions/detail/1676213239/)


# Support

If you liked this explanation and solution please **`upvote`** on [leetcode](https://leetcode.com/problems/count-unhappy-friends/solutions/6888150/solution-for-unhappy-friends-in-python-u-fj4u/).