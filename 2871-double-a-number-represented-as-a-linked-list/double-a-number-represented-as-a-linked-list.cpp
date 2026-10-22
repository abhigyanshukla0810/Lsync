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
ListNode* rev(ListNode* root)
{
    ListNode *p, *q, *r = root;
    p = q = nullptr;
    while(r != nullptr)
    {
        p = q;
        q = r;
        r = r->next;
        q->next = p;
    }
    return q;
}
    ListNode* doubleIt(ListNode* head) {
        head = rev(head);
        ListNode* s =head;
        int carr = 0;
        int x = 0;
        while(s->next != nullptr)
        {
            x = 2 * s->val + carr;
            s->val = x%10;
            carr = x/10;
            s = s->next;
        }
        x = 2 * s->val + carr;
        s->val = x%10;
        carr = x/10;
        if(carr>0) s->next = new ListNode(carr);
        head = rev(head);
        return head;
    }
};