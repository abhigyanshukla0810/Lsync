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
void in(TreeNode* root)
{
    if(root == nullptr) return;
    in(root->left);
    v.emplace_back(root->val);
    in(root->right);
}
TreeNode* bal(int l, int r)
{
    if(l>r) return nullptr;
    int mid = l + (r-l)/2;
    TreeNode* root = new TreeNode(v[mid]);
    root->left = bal(l,mid-1);
    root->right = bal(mid+1,r);
    return root;
}

    TreeNode* balanceBST(TreeNode* root) {
        in(root);
        int l = 0;
        int r = v.size()-1;
        return bal(l,r);

    }
};