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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tail = head;
        int sum = 1;
        while(tail->next != nullptr){
            tail = tail->next;
            sum++;
        }
        ListNode* r1 = head;
        ListNode* r2 = head;
        int l = sum-k;
        while(l--) r1 = r1->next;
        l = k - 1;
        while(l--) r2 = r2->next;
        int temp = r1->val;
        r1->val = r2->val;
        r2->val = temp;
        return head;
    }
};