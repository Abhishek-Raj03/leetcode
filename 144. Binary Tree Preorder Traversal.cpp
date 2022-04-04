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
    void fun(TreeNode *root,vector<int> &v){
        if(root==NULL)
            return;
        v.push_back(root->val);
        fun(root->left,v);
        fun(root->right,v);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        fun(root,v);
        return v;
    }
};
