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
    
# https://leetcode.com/problems/count-unhappy-friends/solutions/6888150/solution-for-unhappy-friends-in-python-u-fj4u/