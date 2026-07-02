class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int finalcount=0;
        int othercount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                finalcount++;
            }
            else{
                nums[i-finalcount]=nums[i];
                othercount++;
            }
        }
        return othercount;
    }
};