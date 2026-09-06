/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head->val == val && head->next != nullptr) head = head->next;
        ListNode* s = head;
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;
        while(s->next !=nullptr){
            if(s->val == val) s = s->next;
            else{
                temp->next = s;
                temp = temp->next;
                s = s->next;
            }
        }
        if(s->val == val) temp->next = nullptr;
        else{
            temp->next = s;
            temp = temp->next;
            temp->next = nullptr;
        }
        return dum->next;
    }
};