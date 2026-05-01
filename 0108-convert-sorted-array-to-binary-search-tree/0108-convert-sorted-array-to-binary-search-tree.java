/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    TreeNode rightadd(int[] nums,int start,int end){
        if(start>end){
            return null;
        }
        int mid=start+(end-start)/2;
        TreeNode root=new TreeNode(nums[mid]);
        // System.out.println(root.val);
        root.left=rightadd(nums,start,mid-1);
        root.right=rightadd(nums,mid+1,end);
        return root;
    }
    public TreeNode sortedArrayToBST(int[] nums) {
        return rightadd(nums,0,nums.length-1);
    }   
}
// 0 5 - 2
// 0 1 - 1
// 4 5 - 4
