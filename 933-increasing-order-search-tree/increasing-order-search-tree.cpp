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
vector <int> v;
    void inorder(TreeNode* root){
        if(root == nullptr) return;
        inorder(root->left);
        v.emplace_back(root->val);
        inorder(root->right);

    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode* newroot = new TreeNode(v[0]);
        TreeNode* s = newroot;
        for(int x : v)
        {
            TreeNode* s1 = new TreeNode(x);
            s->right = s1;
            s = s->right;

        }
        return newroot->right;
    }
};