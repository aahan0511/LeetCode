# Intuition
My solution might not be the best solution but it is _simple_ and _easy_ to understand. My solution can be classified as brute force, but I don't think it is that _bad_. More about it in [Approach](#Approach). 
Also if you have any suggestions, you can correct me.

# Approach
First using a while loop I checked if there was a empty Linked List; `None`; in the `lists`, then I would remove it.

Next we also checked if there was nothing in the lists, i.e. it was empty, we would return `None`.
Even if the length of the `lists` was `1`, we would return the first `ListNode` from the `lists`.

Now, the _main part_ comes. We would first create a `major`, which would hold the **combined sorted list**. We also create a dummy to handle the `major`.

The `minKey` function is just a `key` to the `min` we are going to use. It just says that if the `ListNode` provided is there return it's `val` othervise return `100000`, a number higher than all others.

Now in the while loop again we say while there are lists in `lists`, we will continue.

We find the index of the _`ListNode` with the minimum `val`_, and then we use they `minKey` along with `min`.

We then say that `major.next` should be a ListNode carrying the value of the `ListNode` at `minIDX`. We also set `major` to `major.next`.

Now, the `ListNode` at `minIDX` is taken and set to it's `next`.
We also check that if that `ListNode` is `None`, remove it.

Finally we just return the `dummy.next` as `dummy` is initially a `ListNode`.

# Complexity
- Time complexity: `O(n k)` | *Beats 8.08%*
- Space complexity: `O(n)` | *Beats 97.64%*

# Code
```Python
class Solution:
    def mergeKLists(self, lists: list[ListNode]) ->ListNode:
        while None in lists:
            lists.remove(None)

        if not lists: return None
        if len(lists) == 1: return lists[0]

        major = ListNode()
        dummy = major

        def minKey(ll: ListNode) -> int:
            if ll: return ll.val
            else: return 100000

        while lists:
            minIDX = lists.index(min(lists, key=minKey))
            major.next = ListNode(lists[minIDX].val)
            major = major.next
            lists[minIDX] = lists[minIDX].next
            if not lists[minIDX]: 
                lists.pop(minIDX)

        return dummy.next
```

# Proof

![2231ms | Beats 8.08% ; 19.93MB Beats 97.64%](https://assets.leetcode.com/users/images/a69eb1bf-e353-4c18-9717-91f123f32061_1742898129.3259454.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/merge-k-sorted-lists/solutions/6577583/solution-for-merge-k-lists-in-python-by-p3jdg/).
I know this isn't the _best_ solution, but I can say it is easy to understand.
