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
vector <long long> v;
void fxn(ListNode* head)
{
    ListNode* s = head;
    while(s->next != nullptr)
    {
        s = s->next;
        long long sum = 0;
        while(s->val != 0)
        {
            sum += s->val;
            s = s->next;
        }
        v.emplace_back(sum);
    }
}
    ListNode* mergeNodes(ListNode* head) {
        fxn(head);
        ListNode* root = new ListNode(-1);
        ListNode* s = root;
        for(auto &x : v)
        {
            s->next = new ListNode(x);
            s = s->next;
        }
        return root->next;
    }
};