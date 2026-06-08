class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int[] numo=new int[nums.length];
        int count=0;
        int idx=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<pivot){
                numo[idx++]=nums[i];
            }
            else if(nums[i]==pivot){
                count++;
            }
        }
        while(count>0){
            numo[idx++]=pivot;
            count--;
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]>pivot){
                numo[idx++]=nums[i];
            }
        } 
        return numo;
    }
}