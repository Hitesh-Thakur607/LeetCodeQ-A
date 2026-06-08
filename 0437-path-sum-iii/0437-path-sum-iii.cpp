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
    int countpath(TreeNode* root,int tar,long long sum){
        if(root==nullptr){
            return 0;
        }
        int count=0;
        sum+=root->val;
        count+=countpath(root->left,tar,sum);
        count+=countpath(root->right,tar,sum);
        if(sum==tar){
            count++;
        }
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return 0;
        }
        int count=0;
       count+=countpath(root,targetSum,0);
       count+=pathSum(root->left,targetSum);
       count+=pathSum(root->right,targetSum);
       return count;
    }   
};