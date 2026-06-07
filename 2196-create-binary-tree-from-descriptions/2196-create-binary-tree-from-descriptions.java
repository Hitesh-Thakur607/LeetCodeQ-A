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
    public TreeNode createBinaryTree(int[][] descriptions) {
        HashMap<Integer,TreeNode>mpp=new HashMap<>();
        // HA<Integer,Integer>root=new HashMap<>();
        HashSet<Integer>root=new HashSet<>();
        for(int i=0;i<descriptions.length;i++){
            int parent=descriptions[i][0];
            int child=descriptions[i][1];
            int check=descriptions[i][2];
            if(!mpp.containsKey(parent)){
                mpp.put(parent,new TreeNode(parent));
            }
            if(!mpp.containsKey(child)){
                mpp.put(child,new TreeNode(child));
            }

            if (check == 1) {
                mpp.get(parent).left = mpp.get(child);
            } else {
                mpp.get(parent).right = mpp.get(child);
            }
            root.add(child);
        }
        for(int i=0;i<descriptions.length;i++){
            if(!root.contains(descriptions[i][0])){
                return mpp.get(descriptions[i][0]);
            }
        }
        return null;
    }
}