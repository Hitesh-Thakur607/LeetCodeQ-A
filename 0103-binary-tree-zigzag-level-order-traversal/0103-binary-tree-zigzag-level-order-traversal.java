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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
         List<List<Integer>>ans=new ArrayList<>();
        if(root==null){
            return ans;
        }
        boolean iszig=false;
        Queue<TreeNode>zz=new LinkedList<>();
         ArrayList<Integer>temp=new ArrayList<>();
        zz.add(root);
        zz.add(null);
        while(!zz.isEmpty()){
            TreeNode tempo=zz.poll();
            if(tempo==null){
                if(iszig){
                    Collections.reverse(temp);
                    iszig=false;
                }
                else{
                    iszig=true;
                }
                ans.add(new ArrayList<>(temp));
                temp.clear();
                if(!zz.isEmpty()){
                    zz.add(null);
                }
                continue;
            }
            temp.add(tempo.val);
            if(tempo.left!=null){
                zz.add(tempo.left);
            }
            if(tempo.right!=null){
                zz.add(tempo.right);
            }
        }
        return ans;
    }
}