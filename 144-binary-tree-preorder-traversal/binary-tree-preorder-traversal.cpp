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
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        stack <TreeNode*> st;

        if(root == nullptr) return v;

        TreeNode* current = root;
        TreeNode* r1 = root;
        st.push(current);
        while(!st.empty())
        {
            r1 = st.top();
            st.pop();
            v.emplace_back(r1->val);
            if(r1->right !=nullptr)st.push(r1->right);
            if(r1->left !=nullptr)st.push(r1->left);
        }
        return v;
    }
};