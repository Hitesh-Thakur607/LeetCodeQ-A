class Solution {
    public int longestOnes(int[] nums, int k) {
int maxcount=0;
        for(int i=0;i<nums.length;i++){
            int zerocount=0;
            int tempcount=0;
            for(int j=i;j<nums.length;j++){
                if(nums[j]==1){
                tempcount++;              
            }
            else if(nums[j]==0&&zerocount<k){
                zerocount++;
                tempcount++;
            }
            else break;
        }
             maxcount=Math.max(maxcount,tempcount);
        }
        return maxcount;
    }
}