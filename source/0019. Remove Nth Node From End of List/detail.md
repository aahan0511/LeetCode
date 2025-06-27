# Intuition
This was a _linked list_ problem, but I used a little tweak for this.
I converted the `head` to a array to do this. More about it in [Approach](#Approach).

# Approach
First I created a empty list name `lList`, which would then store the array. Then I said `while head`, which means while `head` is not `None` add `head`'s value to the `lList` and make `head` be `head.next`.

Then I would pop the **nth node from the end** using `-n`, a way to get the **nth node from the end** in python.

Then I reset `head` to a `ListNode` with no value, and initialized a `dummy` to hold it's _pointer_ in the space.

Next I would go through the `lList` with all values being `lNode`s and I made `head.next` a `ListNode` with the `val` of `lNode`. Ofcourse we have to change the `head` to the `next` then.

We made `dummy` so we could return it in the end. We return `dummy.next` as the first node is just a empty `ListNode()`

# Complexity
- Time complexity: `O(n)` | *Beats 100.00%*
- Space complexity: `O(n)` | *Beats 84.80%*

# Code
```Python
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        lList = []
        while head:
            lList.append(head.val)
            head = head.next
        lList.pop(-n)
        head = ListNode()
        dummy = head
        for lNode in lList:
            head.next = ListNode(lNode)
            head = head.next
        return dummy.next
```

# Proof

![0ms | Beats 100.00% ; 17.68MB Beats 84.80%](https://assets.leetcode.com/users/images/a0fb7758-8948-4475-a4f0-e3f7ac1fce24_1742645354.2227454.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/solutions/6566649/solution-for-remove-nth-node-from-end-in-j2a5/).