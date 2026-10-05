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
        void inord(TreeNode* root)
        {
            if(root == nullptr) return;
            inord(root->left);
            v.emplace_back(root->val);
            inord(root->right);
        }
    TreeNode* bstToGst(TreeNode* root) {
        inord(root);
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