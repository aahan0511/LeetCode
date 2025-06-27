class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

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
    
# https://leetcode.com/problems/merge-two-sorted-lists/solutions/6573737/solution-for-merge-two-lists-in-python-u-tli5/