#include <algorithm>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] == nullptr)
                lists.erase(lists.begin() + i--);
        }
        if (lists.size() == 0) 
            return nullptr;
        
        ListNode dummy = ListNode();
        ListNode* head = &dummy;
        
        while (lists.size() > 0) {
            auto it = min_element(
                lists.begin(), 
                lists.end(), 
                [] (ListNode* &a, ListNode* &b) {
                    if (a == nullptr) return false;
                    if (b == nullptr) return true;
                    return (a->val) < (b->val);
                }
            );
            ListNode* &min_list = *it;
            
            head->next = min_list;
            head = head->next;
            if (min_list->next == nullptr) lists.erase(it);
            else min_list = min_list->next;
        }
        
        return dummy.next;
    }
};