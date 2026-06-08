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
void findpath(TreeNode* root,int target,int sum,vector<vector<int>>&paths,vector<int>&path){
    if(root==nullptr) return ;
    sum+=root->val;
    path.push_back(root->val);
    if(root->right==nullptr&&root->left==nullptr&&sum==target){
        paths.push_back(path); 
        path.pop_back();
        return ;
    }
    findpath(root->left,target,sum,paths,path);
    findpath(root->right,target,sum,paths,path);
    path.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return {};
        vector<vector<int>>paths;
        vector<int>path;
        findpath(root,targetSum,0,paths,path);
        return paths;
    }
};