class Solution {
public:
    int count = 0;

    void allpathsum(TreeNode* root, long long sum, int target) {
        if (!root) return;

        sum += root->val;

        if (sum == target) count++;

        allpathsum(root->left, sum, target);
        allpathsum(root->right, sum, target);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;

        allpathsum(root, 0, targetSum);         
        pathSum(root->left, targetSum);         
        pathSum(root->right, targetSum);       

        return count;
    }
};