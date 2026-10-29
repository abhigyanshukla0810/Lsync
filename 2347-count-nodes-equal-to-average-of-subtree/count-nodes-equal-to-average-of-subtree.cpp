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
int num(TreeNode* root)
{
    if(root == nullptr) return 0;
    return 1 + num(root->left) + num(root->right);
}
int sum(TreeNode* root)
{
    if(root == nullptr) return 0;
    return root->val + sum(root->left) + sum(root->right); 
}
int ans = 0;
void pre(TreeNode* root)
{
    if(root == nullptr) return;
    if(root->val == (sum(root) / num(root))) ans++;
    pre(root->left);
    pre(root->right);
}

    int averageOfSubtree(TreeNode* root) {
        pre(root);
        return ans;
        
    }
};