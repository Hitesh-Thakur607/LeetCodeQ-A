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
vector<vector<int>>ans;
void allpathsum(int tar,int sum,vector<int>overall,TreeNode* root){
    if(root==nullptr){
        return ;
    }
    if(tar==sum+root->val){
        if(root->left==nullptr&&root->right==nullptr){
            overall.push_back(root->val);
            ans.push_back(overall);
        }
    }
    overall.push_back(root->val);
    allpathsum(tar,sum+root->val,overall,root->left);
    allpathsum(tar,sum+root->val,overall,root->right);
    overall.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>a;
        allpathsum(targetSum,0,a,root);
        return ans;
    }
};