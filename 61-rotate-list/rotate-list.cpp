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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* tail = head;
        int sum = 1;
        while(tail->next != nullptr)
        {
            tail =  tail->next;
            sum++;
        }
        k = k%sum;
        if(k==0) return head;
        k = sum-k;
        k--;
        ListNode* s = head;
        tail->next = s;
        while(k>0)
        {
            s =s->next;
            k--;
        }
        head = s->next;
        s->next = nullptr;
        return head;
    }
};