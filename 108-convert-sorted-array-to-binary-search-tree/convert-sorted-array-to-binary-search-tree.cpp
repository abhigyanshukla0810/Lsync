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
TreeNode* Bal(int l, int r, vector<int> v)
{
    if(l>r) return nullptr;
    int mid = l + (r-l)/2;
    TreeNode* root = new TreeNode(v[mid]);
    root->left = Bal(l,mid-1,v);
    root->right = Bal(mid+1,r,v);
    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return Bal(0,n-1,nums);
    }
};