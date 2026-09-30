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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            root = new TreeNode(val);
            return root;
        }
        TreeNode* r1 = root;
        TreeNode* r2 = nullptr;
        while(r1 != nullptr){
            r2 = r1;
            if(r1->val < val) r1 = r1->right;
            else r1 = r1->left;
        }
        if(r2->val < val) r2->right = new TreeNode(val);
        else r2->left = new TreeNode(val);
        return root;
    }
};