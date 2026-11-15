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
    vector<int> postorderTraversal(TreeNode* root) {
        // vector <int> v;
        // if(root == nullptr) return v;
        // TreeNode* current  = root;
        // stack <TreeNode*> st;
        // while(true)
        // {
        //     if(current != nullptr){
        //         st.push(current);
        //         current = current->left;
        //     }
        //     else
        //     {
        //         current = st.top();
        //         if(current != nullptr){
        //             st.push(current)
        //         }
        //     }
        // } lund ma ka loda

        if(root == nullptr) return v;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        v.emplace_back(root->val);
        return v;
        
    }
};