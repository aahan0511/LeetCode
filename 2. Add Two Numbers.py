class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

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
    
# https://leetcode.com/problems/add-two-numbers/solutions/6557950/solution-for-add-two-numbers-in-python-b-zixa/