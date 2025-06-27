# Intuition
This was a _LinkedList_ problem. And don't listen to the people in the **discussion**, it is not a _medium_, it is _easy_; only if you put some thinking into it. More about the solution in [Approach](#Approach).

# Approach
First we create a empty `ListNode`, `merged`, which will soon hold the entire merged list. We also need to create a `dummy` which is used to store the `merged` for the returning process.

Next we check that the loop should continue while both `list1` and `list2` are non-`None`. 

The loop checks if `list1.val` is less than `list2.val`, then it will add `list1.val` as a new `ListNode` to the `merged`, and `merged` will become it. We will also move ahead in `list1`.
But if the case is opposite, i.e. `list2.val` is less than `list1.val`, it will do the same for `list2`.

Now at last, after the loop, we say if any list is left then make `merged.next` be it. As there will always be only one list left either `list1` or `list2`, we will use `elif` to reduce _redundancy_.

We finally return `dummy.next` as `dummy` is the empty `ListNode`.

# Complexity
- Time complexity: `O(n + m)` | *Beats 100.00%*
- Space complexity: `O(n + m)` | *Beats 62.25%*

# Code
```Python
class Solution:
    def mergeTwoLists(self, list1: ListNode, list2: ListNode) -> ListNode:
        merged = ListNode()
        dummy = merged
        while list1 and list2:
            if list1.val < list2.val:
                merged.next = ListNode(list1.val)
                merged = merged.next
                list1 = list1.next
            else:
                merged.next = ListNode(list2.val)
                merged = merged.next
                list2 = list2.next
        if list2: merged.next = list2
        elif list1: merged.next = list1
        return dummy.next
```

# Proof

![0ms | Beats 100.00% ; 17.76MB Beats 62.25%](https://assets.leetcode.com/users/images/3efc95eb-abf5-4a83-81bc-a7cb162f331a_1742815169.4674804.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/merge-two-sorted-lists/solutions/6573737/solution-for-merge-two-lists-in-python-u-tli5/).