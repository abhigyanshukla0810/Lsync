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
    // TreeNode* convertBST(TreeNode* root) {
        
    // }
vector<int> v;
        void inorder(TreeNode* root,int *i)
        {
            if(root == nullptr)
                return;

            inorder(root->left,i);
            root->val = v[*i];
            (*i)++;
            inorder(root->right,i);
        }
    TreeNode* convertBST(TreeNode* root) {
        TreeNode* current = root;
        if(root == nullptr) return root;
        stack<TreeNode*> st;
        st.push(current);
        while(!st.empty())
        {
            TreeNode* r1 = st.top();
            st.pop();
            v.emplace_back(r1->val);
            if(r1->left != nullptr) st.push(r1->left);
            if(r1->right != nullptr) st.push(r1->right);
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for(int x : v) sum+=x;
        int prev = 0;
        for(int i = 0; i<v.size();i++){
            int old = v[i];
            v[i] = sum - prev;
            prev += old;
        }
        int i = 0;
        inorder(root,&i);
        return root;
    }
};