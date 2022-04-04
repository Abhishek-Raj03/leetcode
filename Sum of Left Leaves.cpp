class Solution {
public:
    int res=0;
    void fun(TreeNode* root,int dir){
       if(root==NULL)
           return;
        if(root->left==NULL&&root->right==NULL){
            if(dir==1)
                res=res+root->val;
             return;
        }
       
        fun(root->left,1);
        fun(root->right,0);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
       fun(root,-1);
        return res;
    }
};
