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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;
        ListNode* s = head;
        int x = 0;
        while( s != nullptr && s->next != nullptr )
        {
            if(s->val == s->next->val)
            {
                x = s->val;
                while(s != nullptr && s->val == x) s = s->next;
            }
            else
            {
                temp->next = s;
                s = s->next;
                temp = temp->next;
            }
        }
        if(s != nullptr)
        {
            temp->next = s;
            temp = temp->next;
        }
        temp->next = nullptr;
        return dum->next;
    }
};