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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;
        for(int x : nums) st.insert(x);
        ListNode* dum = new ListNode(-1);
        ListNode* temp = dum;
        while(head!=nullptr){
            if(st.find(head->val) == st.end()){
                temp->next = head;
                temp = temp->next;
            }
            head = head->next;
        }
        temp->next = nullptr;
        return dum->next;
    }
};