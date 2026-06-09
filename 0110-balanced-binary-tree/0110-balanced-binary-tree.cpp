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
int oho(TreeNode* root,bool &isbalanced){
    if(root==nullptr){
        return 0;
    }
    int counta=0;
    int countb=0;
    if(root->left!=nullptr){
        counta=oho(root->left,isbalanced);
    }
    if(root->right!=nullptr){
        countb=oho(root->right,isbalanced);
    }
    if(counta-countb>=2||countb-counta>=2){
        isbalanced=false;
    }
    return 1+max(counta,countb);
}
    bool isBalanced(TreeNode* root) {
        bool isbalanced=true;
        oho(root,isbalanced);
        return isbalanced;
    }
};