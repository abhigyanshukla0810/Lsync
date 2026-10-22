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
    ListNode* rev(ListNode* head)
    {
        ListNode* p = nullptr;
        ListNode* q = nullptr;
        ListNode* r = head;
        while(r != nullptr){
            p = q;
            q = r;
            r = r->next;
            q->next = p;
        }
        return q;
    }
    ListNode* removeNodes(ListNode* head){
        if(head->next == nullptr) return head;
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;
        head = rev(head);
        ListNode* s = head;
        int Max = 0;
        while(s != nullptr)
        {
            if(s->val >= Max)
            {
                temp->next = s;
                temp = temp->next;
                Max = s->val;
            }
            s = s->next;
        }
        temp->next = nullptr;
        
        dum = dum->next;
        dum = rev(dum);
        return dum;
    }
};