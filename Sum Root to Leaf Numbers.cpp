class Solution {
public:
   int res=0;
    void fun(TreeNode* root,int a){
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL){
           int sum=a+root->val;
            res=res+sum;
            return;
        }
        fun(root->left,(a*10+root->val*10));
        fun(root->right,(a*10+root->val*10));
    }
    
    
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        return res;
    }
};
