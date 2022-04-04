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
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        bool a=isBalanced(root->left);
        bool b=isBalanced(root->right);
       int lh=height(root->left);
       int rh=height(root->right);
        return(a && b&& abs(lh-rh)<=1);
            
    }
};
