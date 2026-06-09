/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
void mapval(TreeNode* root,TreeNode* p,TreeNode* q,vector<TreeNode*>&a,vector<vector<TreeNode*>>&ans){
    if(root==nullptr){
        return;
    }
    a.push_back(root);
    if(root==p||root==q){
        ans.push_back(a);
    }
    mapval(root->left,p,q,a,ans);
    mapval(root->right,p,q,a,ans);
    a.pop_back();
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>a;
        vector<vector<TreeNode*>>ans;
        mapval(root,p,q,a,ans);
        int size=min(ans[0].size(),ans[1].size());
        TreeNode* last;
        for(int i=0;i< size;i++){
          if(ans[0][i]==ans[1][i]){
            last=ans[0][i];
          }      
        }
        return last;
    }
};