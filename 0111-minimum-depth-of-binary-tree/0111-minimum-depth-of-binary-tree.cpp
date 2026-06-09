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
int oho(TreeNode* root){
    if(root==nullptr){
        return INT_MAX;
    }
    if(root->left==nullptr&&root->right==nullptr){
        return 1;
    }
    return 1+min(oho(root->left),oho(root->right));
}
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        return oho(root);
    }
};