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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        TreeNode* r1 = root;
        stack <TreeNode*> st;
        TreeNode* current = root;
        while(!st.empty() || current != nullptr)
        {
            if(current != nullptr){
                st.push(current);
                current = current->left;
            }

            if(current == nullptr){
                r1 = st.top();
                current = r1->right;
                st.pop();
                v.emplace_back(r1->val);
            }
        }
        return v;
        
    }
};