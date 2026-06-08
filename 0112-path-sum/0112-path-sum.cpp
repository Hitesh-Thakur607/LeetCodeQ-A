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
bool findpath(TreeNode* root,int target,int sum){
    if(root==nullptr) return false;
    sum+=root->val;
    if(root->right==nullptr&&root->left==nullptr&&sum==target)return true;
    if(findpath(root->left,target,sum)) return true;
    if(findpath(root->right,target,sum)) return true;
    return false;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        return findpath(root,targetSum,0);
    }
};