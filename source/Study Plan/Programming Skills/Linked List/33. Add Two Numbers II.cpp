// 445. Add Two Numbers II

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        
        ListNode dummy;
        ListNode* l3 = &dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int a1 = 0;
            if (l1 != nullptr) {
                a1 = l1->val;
                l1 = l1->next;
            }
            int a2 = 0;
            if (l2 != nullptr) {
                a2 = l2->val;
                l2 = l2->next;
            }
            int sum = a1 + a2 + carry;
            carry = sum / 10;
            sum %= 10;
            l3->next = new ListNode(sum);
            l3 = l3->next;
        }
        return reverseList(dummy.next);
    }
};