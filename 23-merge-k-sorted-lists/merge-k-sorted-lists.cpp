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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector <int> v;
        for(auto it : lists)
        {
            while(it != nullptr)
            {
                v.emplace_back(it->val);
                it = it->next;
            }
        }
        sort(v.begin(),v.end());
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