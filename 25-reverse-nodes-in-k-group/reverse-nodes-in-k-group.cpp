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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next == nullptr) return head;
        stack <ListNode*> st;
        ListNode* s = head;
        int sum = 0;
        int y = 0;
        while(s != nullptr){
            s = s->next;
            sum++;
        }
        s = head;
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;

        while(s != nullptr && sum >= k){
            for(int i = 0; i<k;i++){
                st.push(s);
                s = s->next;
            }
            while(!st.empty()){
                ListNode* node = st.top();
                node->next = nullptr;
                temp->next = node;
                temp = temp->next;
                st.pop();
            }
            sum -=k;
        }
        if(sum != 0) temp->next = s;
        return dum->next;
    }
};