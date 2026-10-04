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
        vector <int> v;
        if(root == nullptr) return v;
        stack <TreeNode*> st;
        TreeNode* current = root;
        while(true)
        {
            if(current != nullptr){
                st.push(current);
                current = current->left;
            }
            else{
                if(!st.empty()){
                    current = st.top();
                    st.pop();
                    v.emplace_back(current->val);
                    current = current->right;
                }
                else break;
            }
        }
        return v;
        
    }
};