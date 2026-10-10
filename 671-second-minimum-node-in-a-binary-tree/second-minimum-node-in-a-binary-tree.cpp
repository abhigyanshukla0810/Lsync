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
set <long long> st;
void in(TreeNode* root)
{
    if(root==nullptr) return;
    in(root->left);
    st.insert(root->val);
    in(root->right);
}
    int findSecondMinimumValue(TreeNode* root) {
        in(root);
        long long y = 0;
        if(st.size() >= 2){
            int i = 0;
            for(auto &it : st)
            {
                if(i == 2) break;
                y = it;
                i++;
            }
            return y;
        }
        return -1;
    }
};