/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *start) {
        if(start == nullptr) return false;
        if(start ->next == nullptr) return false;
        ListNode* slow = start;
        ListNode* fast = start;
        while(fast-> next != nullptr &&fast->next->next != nullptr){
            slow = slow->next;
            fast = fast ->next->next;
        if(slow == fast) return true;
        }
        return false;
    }
};