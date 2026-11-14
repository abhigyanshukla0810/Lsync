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
unordered_set <int> st;
void in(TreeNode* root)
{
    if(root==nullptr) return;
    in(root->left);
    st.insert(root->val);
    v.emplace_back(root->val);
    in(root->right);
}
    bool findTarget(TreeNode* root, int k) {
        in(root);
        int n = v.size();
        for(int i = 0; i<n;i++)
        {
            st.erase(v[i]);
            if(st.find(k - v[i]) != st.end()) return true;
        }
        return false;
    }
};