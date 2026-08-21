/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        unordered_set<ListNode*> sst;
        ListNode* s = headA;
        while(s !=nullptr){
            sst.insert(s);
            s = s->next;
        }
        s = headB;
        while(s != nullptr){
            if(sst.find(s) != sst.end()) return s;
            s =s->next;
        }
        return nullptr;
    }
};