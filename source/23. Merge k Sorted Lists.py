class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

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

# https://leetcode.com/problems/merge-k-sorted-lists/solutions/6577583/solution-for-merge-k-lists-in-python-by-p3jdg/