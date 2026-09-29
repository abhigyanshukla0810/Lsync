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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr) return nullptr;
        TreeNode* r1 = root;
        TreeNode* r2 = nullptr;
        while(r1 != nullptr){
            if(r1->val < val) r1 = r1->right;
            else if (r1->val == val) return r1;
            else r1 = r1->left;
        }
        return nullptr;
    }
};