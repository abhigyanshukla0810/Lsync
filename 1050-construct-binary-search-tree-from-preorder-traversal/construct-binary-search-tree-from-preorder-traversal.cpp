/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void insert(TreeNode* root, int x)
{
    TreeNode* s1 = root;
    TreeNode* s2 = root;
    while(s1 != nullptr)
    {
        s2 = s1;
        if(s1->val > x) s1 = s1->left;
        else s1 = s1->right;
    }
    if(s2->val < x) s2->right = new TreeNode(x);
    else s2->left = new TreeNode(x);
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i = 1; i<n;i++)
        {
            insert(root,preorder[i]);
        } 
        return root;
    }
};