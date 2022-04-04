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
    vector<int> rightSideView(TreeNode* root) {
        map<int,int> m;
        vector<int> v;
        queue<pair<TreeNode*,int>> q;
        if(root==NULL){
            return v;
        }
      // else{
        q.push({root,0});
        while(!q.empty()){
            TreeNode* t=q.front().first;
            int h=q.front().second;
            q.pop();
            if(m[h]==0){
                m[h]=t->val;
            }
                if(t->right!=NULL){
                    q.push({t->right,h+1});
                }
                if(t->left!=NULL){
                    q.push({t->left,h+1});
                }
        }
        for(auto x:m){
            v.push_back(x.second);
        }
      // }
        return v;
    }
};
