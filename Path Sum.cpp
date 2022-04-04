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
    int b=8753578;
    void fun(TreeNode *root,int targetSum,int a){
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL){
            int sum=a+root->val;
            if(sum==targetSum){
                b=sum;
            }
            return;
        }
        fun(root->left,targetSum,a+root->val);
        fun(root->right,targetSum,a+root->val);
    }
    
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
         return false;
        }
        fun(root,targetSum,0);
        if(b==targetSum)
            return true;
        else
            return false;
    }
};
