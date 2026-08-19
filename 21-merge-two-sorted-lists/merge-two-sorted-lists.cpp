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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1== nullptr) return list2;
        if(list2 == nullptr) return list1;

        ListNode* dum = new ListNode(-1);
        ListNode* s1 = list1;
        ListNode* s2 = list2;
        ListNode* temp = dum;
        while(s1 != nullptr && s2!= nullptr){
            if(s1->val <= s2->val){
                temp->next = s1;
                temp = temp->next;
                s1 = s1->next;
            }
            else{
                temp->next = s2;
                temp = temp->next;
                s2 = s2->next;
            }
        }
        if(s1 == nullptr) temp->next = s2;
        else temp->next = s1;
        return dum->next;
    }
};