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
    while(r!=nullptr)
    {
        p = q;
        q = r;
        r = r->next;
        q->next = p;
    }
    return q;
}
    bool isPalindrome(ListNode* head) {
        if(head->next == nullptr) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* s = slow->next;
        slow->next = nullptr;
        s = rev(s);
        slow->next = s;
        fast = s;
        slow = head;
        while(s != nullptr)
        {
            if(slow->val != s->val) return false;
            slow = slow->next;
            s = s->next;
        }
        return true;
    }
};