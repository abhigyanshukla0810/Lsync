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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr) return nullptr;
        ListNode* s = head;
        int sum = 1;
        while(s->next != nullptr){
            s = s->next;
            sum++;
        }
        if(n==sum) return head->next;
        if(n==1){
            s = head;
            while(s->next->next != nullptr) s = s->next;
            s->next = nullptr;
            return head;
        }
        sum = sum - n;
        s = head;
        while(sum--) s = s->next;
        s->val = s->next->val;
        s->next = s->next->next;
        return head;
    }
};