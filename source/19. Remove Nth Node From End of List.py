class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

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
    
# https://leetcode.com/problems/remove-nth-node-from-end-of-list/solutions/6566649/solution-for-remove-nth-node-from-end-in-j2a5/