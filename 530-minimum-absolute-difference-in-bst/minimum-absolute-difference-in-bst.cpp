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
    int getMinimumDifference(TreeNode* root) {
        in(root);
        int sex = INT_MAX, n = v.size();
        for(int i = 0; i<n-1;i++)
        {
            sex = min(sex,v[i+1]-v[i]);
        }
        return sex;
    }
};