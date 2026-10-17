/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* s1 = root;
        TreeNode* s2 = root;
        TreeNode* ans = root;
        while(s1 != p || s2 != q)
        {
            if(s1->val == s2->val) ans = s1;
            if(s1->val > p->val) s1 = s1->left;
            else if( s1->val < p->val) s1 = s1->right;

            if(s2->val > q->val) s2 = s2->left;
            else if( s2->val < q->val) s2 = s2->right;
            
        }
        return ans;
    }
};