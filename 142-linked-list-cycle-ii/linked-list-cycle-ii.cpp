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
    ListNode *detectCycle(ListNode *head) {
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        bool cycle = false;
        while(fast ->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cycle = true;
                break;
            }
        }
        if(cycle){
            fast = head;
            while(slow != fast){
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
        return nullptr;   
    }
};