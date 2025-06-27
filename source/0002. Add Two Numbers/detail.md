# Intuition
This question was itself not very hard, but it does require you to think. You have to iterate through the linked lists and add the numbers as if you are in the _first grade_. More about it in [Approach](#Approach).

# Approach
I thought of iterating through the lists and then find the sum of all pairs of numbers and store their remainders.

First I created a new `ListNode` named `l3`. For which there was a `dummy` which stored the linked list. Next I initialized a `remainder` which would hold the remainder of each sum.

We then go through both the lists `l1` and `l2` until neither of them remains. The _if statements_ check if by any chance one _LL_ is shorter than the other, adds a leading zero to the shorter one. **Creating a empty `ListNode()` sets it's `.val` to 0**.

We store the answer in `ans` which is the sum of `l1.val`, `l2.val` and the `remainder`. We again set the `remainder` to the _tens digit_ of the `ans`, which we can get by dividing it by 10. As we dont want the decimal, we use `//`.

We then state that the `.next` of `l3` should be a new `ListNode` with the value of the _units digit_ of the `ans` which can be obtained by getting the remainder of the `ans` and _10_.

To set the value of all `ListNodes` to their `.next` we use  `l1, l2, l3 = l1.next, l2.next, l3.next`. This is just a way to assign multiple variables at once.

Now outside the loop, we check if the `remainder` is 0 or not, if it is not _0_, it means that it is still _remaining_, so we add a new `ListNode` to `l3.next` and set it's value to `remainder`.

We return `dummy.next` as `dummy` holds the `l3`'s true form. But it's first `ListNode` is empty.

# Complexity
- Time complexity: `O(max(n m))` | *Beats 100.00%*
- Space complexity: `O(max(n m))` | *Beats 57.64%*

# Code
```Python
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        l3 = ListNode()
        dummy = l3
        remainder = 0
        while l1 or l2:
            if not l1: l1 = ListNode()
            if not l2: l2 = ListNode()
            ans = l1.val + l2.val + remainder
            remainder = ans // 10
            l3.next = ListNode(ans % 10)
            l1, l2, l3 = l1.next, l2.next, l3.next
        if remainder: l3.next = ListNode(remainder)
        return dummy.next
```

# Proof

![0ms | Beats 100.00% ; 17.81MB Beats 57.64%](https://assets.leetcode.com/users/images/90b12cfe-1e40-4a60-a675-7eb5d70e6083_1742445796.3053613.png)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/add-two-numbers/solutions/6557950/solution-for-add-two-numbers-in-python-b-zixa/).