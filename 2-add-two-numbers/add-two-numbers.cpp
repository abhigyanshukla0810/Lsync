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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* s1 = l1;
        ListNode* s2 = l2;
        int carr = 0;
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;
        while(s1 != nullptr && s2 != nullptr)
        {
            int x = (carr + s1->val + s2->val);
            carr = x/10;
            temp->next = new ListNode(x%10);
            temp = temp->next;
            s1 = s1->next;
            s2 = s2->next;
        }
        if(s1 == nullptr)
        {
            while(s2 != nullptr)
            {
                int x = (carr  + s2->val);
                carr = x/10;
                temp->next = new ListNode(x%10);
                temp = temp->next;
                s2 = s2->next;
            }
            temp->next = nullptr;
        }
        else if(s2 == nullptr)
        {
            while(s1 != nullptr)
            {
                int x = (carr + s1->val);
                carr = x/10;
                temp->next = new ListNode(x%10);
                temp = temp->next;
                s1 = s1->next;
            }
            temp->next = nullptr;
        }
        if(carr>0)
        {
            temp->next = new ListNode(carr);
            temp = temp->next;
        }
        return dum->next;
    }
};